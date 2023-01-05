const fs  = require('fs')

const writableStream = fs.createWriteStream('write.txt');

writableStream.write('Lorem Ipsum aku suka makan daun kesum!\t');
writableStream.write('Dolor sit amat aku punya kolor si amat\n');
writableStream.end('Hello World! pala bapakkau pecah');