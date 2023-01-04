//    USING moment MODULE
// const moment = require('moment')
// const date = moment().format("dddd, MMMM Do YYYY")
// console.log(date)

//    Latihan USING lodash MODULE
// const lodash = require("lodash")
// const myOddEvenArray = lodash.partition([1,2,3,4,5,6], (n) => n%2);
// console.log(myOddEvenArray)

//    USING event MODULE
// const { EventEmitter, on } = require('events')
// const myEventEmitter = new EventEmitter()
// const makeCoffee = ( name ) => {
//   console.log(`Kopi ${name} telah dibuat!`)
// }
// const makeBill = ( {name, price} ) => {
//   console.log(`Harga Kopi ${name} adalah ${price}`)
// }
// const onCoffeeOrderedListener = ({ name, price }) => {
//   makeCoffee(name)
//   makeBill({ name, price })
// }
// myEventEmitter.on('coffee-order', onCoffeeOrderedListener)
// myEventEmitter.emit('coffee-order', { name: 'Luwak', price: 13500})

//    Latihan USING Events MODULE
// const { EventEmitter } = require('events')
// const myEventEmitter = new EventEmitter()
// const birtdayEventListener = ({name}) => {
//   console.log(`Happy Birthday ${name}!`)
// }
// myEventEmitter.on('birthday', birtdayEventListener)
// myEventEmitter.emit('birthday', {name: 'Tafif'})