const fs = require('fs');

const readFile = fs.readFileSync('input.txt', 'utf-8');

console.log('\tREAD input.txt file\n\n', readFile)

fs.writeFileSync('output.txt', readFile);

const readableStream = fs.createReadStream('./output.txt', {
  highWaterMark: 10
})

console.log('\n\tREAD output.txt file\n')

readableStream.on('readable', () => {
  try {
    process.stdout.write(`${readableStream.read()}\n`);
  } catch(error) {
    console.log('ERROR')
  }
});

readableStream.on('end', () => {
  console.log('\n\nDONE');
})