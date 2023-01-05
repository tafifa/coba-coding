console.log('Halo, kita akan belajar membuat server');

const http = require('http');

const requestListener = (request, response) => {
  response.setHeader('Content-Type', 'text/html');

  response.statusCode = 200;

  const { method } = request;

  if (method == 'GET') {
    response.end('<h1> This is GET! </h1>')
  }
  if (method == 'POST') {
    response.end('<h1> This is POST! </h1>')
  }
  if (method == 'PUT') {
    response.end('<h1> This is PUT! </h1>')
  }
  if (method == 'DELETE') {
    response.end('<h1> This is DELETE! </h1>')
  }
  
};

const server = http.createServer(requestListener);

const port = 5000;
const host = 'localhost';

server.listen(port, host, () => {
  console.log(`Server berjalan pada http://${host}:${[port]}`);
})

// test in cmd

// curl -X POST http://localhost:5000
// output: <h1> This is POST! </h1>

// curl -X PUT http://localhost:5000
// output: <h1> This is PUT! </h1>

// curl -X DELETE http://localhost:5000
// output: <h1> This is DELETE! </h1>

// curl -X GET http://localhost:5000
// output: <h1> This is GET! </h1>