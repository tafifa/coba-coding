console.log('Halo, kita akan belajar membuat server');

const http = require('http');

const requestListener = (request, response) => {
  // response.setHeader('Content-Type', 'text/html');
  response.setHeader('Content-Type', 'application/json');
  response.setHeader('X-Powered-By', 'NodeJS');

  response.statusCode = 200;

  const { url, method } = request;

  if (url == '/') {
    if (method == 'GET') {
      response.statusCode = 200;

      response.end(JSON.stringify({
        message: 'Ini adalah homepage',
      }))
      // response.end(`<h1>Halo ini adalah halaman [ ${url} ] (homepage) </h1>`);
    } else {
      response.statusCode = 400;

      response.end(JSON.stringify({
        message: `Halaman tidak dapat diakses dengan ${method} request`,
      }))
      // response.end(`<h1>Halaman tidak dapat diakses dengan ${method} request</h1>`);
    }

  } else if (url == '/about') {
    if (method == 'GET') {
      response.statusCode = 200;

      response.end(JSON.stringify({
        message: `Halo ini adalah halaman ${url}`,
      }))
      // response.end(`<h1>Halo ini adalah halaman [ ${url} ] (about) </h1>`);
    } else if (method == 'POST') {
      response.statusCode = 200;
      let body = [];

      request.on('data', (chunk) => {
        body.push(chunk);
      })

      request.on('end', () => {
        body = Buffer.concat(body).toString();
        const { name } = JSON.parse(body);
        response.end(JSON.stringify({
          message: `Halo ${name}!, ini adalah halam [ ${url} ]`,
        }))
        // response.end(`<h1>Halo ${name}!, ini adalah halaman [ ${url} ] </h1>`);
      })
    } else {
      response.statusCode = 400;

      response.end(`<h1>Halaman tidak dapat diakses dengan ${method} request</h1>`);
    }

  } else {
    response.statusCode = 404;
    response.end(JSON.stringify({
      message: 'Halaman tidak ditemukan!',
    }))
    // response.end('<h1>Halaman tidak ditemukan!</h1>');

  }


  // if (method == 'POST') {
  //   let body = [];

  //   request.on('data', (chunk) => {
  //     body.push(chunk);
  //   })

  //   request.on('end', () => {
  //     body = Buffer.concat(body).toString();
  //     const { name } = JSON.parse(body);
  //     response.end(`<h1> Hi, ${name} </h1>`)
  //   })
  // }
  // if (method == 'GET') {
  //   response.end('<h1>test</h1>');
  // }


  // hide
  // if (method == 'PUT') {
  //   response.end('<h1> This is PUT! </h1>')
  // }
  // if (method == 'DELETE') {
  //   response.end('<h1> This is DELETE! </h1>')
  // }
  
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

// curl -X POST -H "Content-Type: application/json" http://localhost:5000 -d "{\"name\": \"Tafif\"}"