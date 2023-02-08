const mongoose = require('mongoose');
mongoose.connect(process.env.MOGODB_URI);

const db = mongoose.connection;
db.on('error', console.error.bind(console, 'connection error: '));
db.once('open', function () {
    console.log('Connected to hhman database')
});

// Models
require('./Category');
require('./Recipe');