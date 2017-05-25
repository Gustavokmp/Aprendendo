var http = require('http');

/*
req = requist
res = response
*/
var server = http.createServer(function(req,res){
    res.writeHead(200,{'Contet-type': 'text/html'});
    res.write("Hello Word!");
    res.write('<br>');
    res.write('Aulas de nodejs');
    res.write('<br>');
    res.write('Ministrado por thiago porto')
    res.end();
});
server.listen(3000,function(){
    console.log('Servidor rodando na porta 3000');
});