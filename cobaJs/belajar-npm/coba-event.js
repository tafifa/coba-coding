//    USING event MODULE

const { EventEmitter, on } = require('events')

const myEventEmitter = new EventEmitter()

const makeCoffee = ( name ) => {
  console.log(`Kopi ${name} telah dibuat!`)
}

const makeBill = ( {name, price} ) => {
  console.log(`Harga Kopi ${name} adalah ${price}`)
}

const onCoffeeOrderedListener = ({ name, price }) => {
  makeCoffee(name)
  makeBill({ name, price })
}

myEventEmitter.on('coffee-order', onCoffeeOrderedListener)

myEventEmitter.emit('coffee-order', { name: 'Luwak', price: 13500})