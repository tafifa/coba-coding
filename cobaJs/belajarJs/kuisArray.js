/**
 * TODO:
 * Buatlah sebuah variabel dengan nama evenNumber yang merupakan sebuah array dengan ketentuan:
 *   - Array tersebut menampung bilangan genap dari 1 hingga 100
 *
 * Catatan:
 *   - Agar lebih mudah, gunakanlah for loop dan logika if untuk mengisi bilangan genap pada array.
 */

// TODO

let evenNumber = [];

numberIteration = 0;

for (let i = 2; i <= 100; i++)
{
  if (i % 2 == 0) {evenNumber[numberIteration] = i; numberIteration++};
}
console.log(evenNumber)

/**
 * Jangan hapus kode di bawah ini
 */

 module.exports = evenNumber;
