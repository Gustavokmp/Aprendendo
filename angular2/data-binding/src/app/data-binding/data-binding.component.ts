import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-data-binding',
  templateUrl: './data-binding.component.html',
  styleUrls: ['./data-binding.component.css']
})
export class DataBindingComponent implements OnInit {

  url:string = 'https://github.com/Gustavokmp';

  cursoAngular: boolean = true;
  
  urlImagem = 'http://lorempixel.com/400/200/technics/';

  valorAtual: string = '';
  valorSalvo = '';
  isMauseOver: boolean = false;

  nome: string = 'abc';

  pessoa: any = {
    nome:'def',
    idade:24
  }


  getValor(){
    return 5;
  }

  getCurtirCurso(){
    return true;
  }

  botaoClicado(){
    alert('Botão clicado!');
  }
  onKeyUp(evento: KeyboardEvent)
{
  this.valorAtual = (<HTMLInputElement>evento.target).value;
}
salvarValor(valor){
  this.valorSalvo = valor;
}
onMauseOverOut(){
  this.isMauseOver = !this.isMauseOver;

}

  constructor() { 

  }

  ngOnInit() {
  }

}
