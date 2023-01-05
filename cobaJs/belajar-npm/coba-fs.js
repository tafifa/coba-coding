//    LATIHAN USING fs (filesystem) MODULE

const fs = require('fs')

// using asynchronous

const fileReadCallback = (error, data) => {
  if (error) {
    console.log('Gagal membaca berkas');
    return;
  }
  console.log(data);
}

fs.readFile('coba-fs.txt', 'utf-8', fileReadCallback);

// or using synchronous

const data = fs.readFileSync('coba-fs.txt', 'utf-8');
console.log(data)