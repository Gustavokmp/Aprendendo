var pessoa = {
  nome: 'Gustavo Maciel Pires',
  cargo: 'Desenvolvedor de Software',
  foto: 'gustavo-perfil.jpg',

}

document.getElementById('nome-cabecalho').innerHTML = pessoa.nome;
document.getElementById('cargo-cabecalho').innerHTML = pessoa.cargo;
document.getElementById('foto-cabecalho').src = pessoa.foto;
