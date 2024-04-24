Building web applications using Node.js Environment and Express framework
Date:
1. Create a Web server listening on port 3000.
2. Create a File server to perform read and write operation file listening at port 4000
3. Design web application using express framework with middleware’s and routing methods
4. Design a web application with event modules and user defined modules.


mkdir my-node-app

cd my-node-app

npm init -y

npm install express

node server.js


Working:

- When you run the application using node server.js, both servers start listening on their respective ports.
- You can access the main server's routes at http://localhost:3000/ and http://localhost:3000/data.
- You can access the file server's routes at http://localhost:4000/readfile and http://localhost:4000/writefile.
- When you access http://localhost:4000/readfile, it reads the content of example.txt and sends it as a response.
- When you access http://localhost:4000/writefile, it writes 'Hello, File!' to example.txt and sends a success message as a response.
