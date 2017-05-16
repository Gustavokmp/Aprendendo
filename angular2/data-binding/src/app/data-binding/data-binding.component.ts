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

  getValor(){
    return 5;
  }

  getCurtirCurso(){
    return true;
  }
  constructor() { }

  ngOnInit() {
  }

}
