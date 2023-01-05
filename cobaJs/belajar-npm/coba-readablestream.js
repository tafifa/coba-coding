const fs = require('fs');

const readableStream = fs.createReadStream('./read.txt', {
  highWaterMark: 10
})

console.log("START\n")

readableStream.on('readable', () => {
  try {
    process.stdout.write(`${readableStream.read()}\t`);
  } catch(error) {
    console.log('ERROR')
  }
});

readableStream.on('end', () => {
  console.log('\n\nDONE');
})