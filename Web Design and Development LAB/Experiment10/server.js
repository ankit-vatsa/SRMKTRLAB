const express = require('express');
const fs = require('fs');
const app = express();

// Middleware
app.use(express.json());
app.use(express.urlencoded({ extended: false }));

// Routing
app.get('/', (req, res) => {
    res.send('Home Page');
});

app.post('/data', (req, res) => {
    const { name, age } = req.body;
    res.send(`Name: ${name}, Age: ${age}`);
});

// File server for reading and writing files
const fileApp = express();

fileApp.get('/readfile', (req, res) => {
    fs.readFile('example.txt', 'utf8', (err, data) => {
        if (err) {
            res.send('Error reading file');
        } else {
            res.send(data);
        }
    });
});

fileApp.get('/writefile', (req, res) => {
    fs.writeFile('example.txt', 'Hello, File!', (err) => {
        if (err) {
            res.send('Error writing file');
        } else {
            res.send('File written successfully');
        }
    });
});

fileApp.listen(4000, () => {
    console.log('File server running on port 4000');
});

// Start the main server on port 3000
app.listen(3000, () => {
    console.log('Server running on port 3000');
});
