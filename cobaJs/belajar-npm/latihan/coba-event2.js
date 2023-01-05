//    Latihan USING Events MODULE

const { EventEmitter } = require('events')

const myEventEmitter = new EventEmitter()

const birtdayEventListener = ({name}) => {
  console.log(`Happy Birthday ${name}!`)
}

myEventEmitter.on('birthday', birtdayEventListener)

myEventEmitter.emit('birthday', {name: 'Tafif'})