//Node server which will handle socket io connections
// const express= require('express')
// const app = express()
// const server = require('http').Server(app)

// app.set('views','./views')
// app.set('view engine','ejs')

const io = require("socket.io")(8000, {
  cors:{
    origin:'*',
  }
})

const users = {};

io.on('connection', socket => {
  socket.on('new-user-joined', name => {
    //console.log("New User joined",name);
    users[socket.id] = name;
    socket.broadcast.emit('user-joined', name);
  });

  socket.on('send', message=>{
    socket.broadcast.emit('receive',{message: message, name:users[socket.id]}) 
  });

  socket.on('disconnect', message=>{
    socket.broadcast.emit('left',users[socket.id])
    delete users[socket.id]; 
  });
})
