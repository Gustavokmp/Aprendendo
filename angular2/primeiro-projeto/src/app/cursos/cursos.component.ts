import { Component, OnInit } from '@angular/core';

import {CursosService} from './cursos.service';

@Component({
  selector: 'app-cursos',
  templateUrl: './cursos.component.html',
  styleUrls: ['./cursos.component.css']
})
export class CursosComponent implements OnInit {
  meuGit:string;

  cursos:string[];

  constructor(private CursosService: CursosService) { 
    this.meuGit = 'https://github.com/Gustavokmp';
   
   //var servico = new CursosService();
   this.cursos = this.CursosService.getCursos();
    
  }

  ngOnInit() {
  }

}
