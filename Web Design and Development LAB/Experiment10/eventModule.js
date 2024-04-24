const EventEmitter = require('events');
const eventEmitter = new EventEmitter();

eventEmitter.on('event', () => {
    console.log('Event occurred');
});

module.exports = eventEmitter;
