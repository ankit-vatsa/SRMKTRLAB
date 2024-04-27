const express = require('express');
const mongoose = require('mongoose');
const path = require('path');
const bodyParser = require('body-parser');
const jwt = require('jsonwebtoken');
const User = require('./models/user');
const Message = require('./models/message');
const { error } = require('console');
const app = express();

// Connect to MongoDB
mongoose.connect('mongodb://localhost:27017/messagingApp', { useNewUrlParser: true, useUnifiedTopology: true })
    .then(() => console.log('MongoDB Connected'))
    .catch(err => console.log(err));

// Body parser middleware
app.use(bodyParser.json());

// Enable CORS
app.use((req, res, next) => {
    res.header('Access-Control-Allow-Origin', '*');
    res.header('Access-Control-Allow-Headers', 'Origin, X-Requested-With, Content-Type, Accept');
    next();
});

// Register route
app.post('/api/register', async (req, res) => {
    try {
      const { username, password } = req.body;
      
      // Check if user already exists
      const existingUser = await User.findOne({ username });
      if (existingUser) {
        return res.status(400).json({ error: 'User already exists' });
      }
  
      // Create a new user
      const newUser = new User({ username, password });
      await newUser.save();
      
      res.json({ message: 'Registration successful', newUser });
    } catch (err) {
      console.error(err);
      res.status(500).json({ error: 'Server error' });
    }
  });   

// Login route
app.post('/api/login', async (req, res) => {
    try {
        const { username, password } = req.body;
        const user = await User.findOne({ username, password });
        if (!user) {
            return res.status(401).json({ error: 'Invalid username or password' });
        }
        const token = jwt.sign({ userId: user._id }, 'your_secret_key', { expiresIn: '1h' });
        res.json({ message: 'Login successful', token, user });
    } catch (err) {
        console.error(err);
        res.status(500).json({ error: 'Server error' });
    }
});

app.post('/api/messages', async (req, res) => {
    try {
        const { currUser, clickedUser } = req.body;

        if (!currUser || !clickedUser) {
            return res.status(400).json({ error: 'Current user and clicked user are required' });
        }

        const messages = await Message.aggregate([
            {
                $match: {
                    $or: [
                        { fromUser: currUser, toUser: clickedUser },
                        { fromUser: clickedUser, toUser: currUser }
                    ]
                }
            },
            {
                $project: {
                    message: 1,
                    direction: {
                        $cond: {
                            if: { $eq: ["$fromUser", currUser] },
                            then: "user-msg",
                            else: "recipient-msg"
                        }
                    },
                    timestamp: 1
                }
            },
            {
                $sort: { timestamp: 1 }
            }
        ]);

        const transformedMessages = messages.map(msg => {
            return {
                text: msg.message,
                from: msg.direction === 'user-msg' ? 'user' : 'recipient',
                direction: msg.direction
            };
        });

        res.json(transformedMessages);
    } catch (error) {
        console.error('Error fetching messages:', error);
        res.status(500).json({ error: 'Internal server error' });
    }
});

// Define the /api/sendMessage endpoint
app.post('/api/sendMessage', async (req, res) => {
    try {
        // Extract the necessary data from the request body
        const { fromUser, toUser, message } = req.body;
        
        // Validate the data (optional)
        if (!fromUser || !toUser || !message) {
            return res.status(400).json({ error: 'Missing required fields' });
        }

        // Process the message (e.g., save it to the database)
        // You can use your Message model to save the message
        // For example:
        const newMessage = new Message({ fromUser, toUser, message });
        await newMessage.save();

        // Respond with a success message
        res.status(201).json({ message: 'Message sent successfully' });
    } catch (error) {
        // Handle any errors that occur during message processing
        console.error('Error sending message:', error);
        res.status(500).json({ error: 'Server error' });
    }
});



app.post('/api/users', async (req, res) => {
    try {
        const users = await User.find({}, 'username'); // Only retrieve the username field
        const usersWithAvatars = users.map(user => ({
            username: user.username,
            avatar: `https://source.unsplash.com/random/200x200?sig=${Math.floor(Math.random() * 1000)}` // Generating random signature for avatar
        }));
        res.json(usersWithAvatars);
    } catch (err) {
        console.error(err);
        res.status(500).json({ error: 'Internal server error' });
    }
});

app.use(express.static('public'));

app.get('*', (req, res) => {
    res.sendFile('index.html', { root: path.join(__dirname, 'public') });
});

// Start server
const port = process.env.PORT || 3000;

app.listen(port, () => console.log(`Server running on port ${port}`));
