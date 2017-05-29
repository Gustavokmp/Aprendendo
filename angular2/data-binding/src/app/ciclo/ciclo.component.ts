import { AfterContentChecked, AfterContentInit, AfterViewChecked, AfterViewInit, Component, Input, OnChanges, OnDestroy, OnInit } from '@angular/core';

@Component({
  selector: 'app-ciclo',
  templateUrl: './ciclo.component.html',
  styleUrls: ['./ciclo.component.css']
})
export class CicloComponent implements OnInit  {

  @Input() valorInicial: number = 10;

  constructor() {
    this.log('constructor');
   }
   ngOnChages(){
     this.log('ngOnchanges');
   }
   ngAfterContentChecked() {
     this.log('ngAfterContentChecked');
   }
   ngAfterContentInit() {
     this.log('ngAfterContentInit');
   }
   ngAfterViewInit() {
     this.log('ngAfterViewInit');
   }
   ngAfterViewChecked() {
     this.log('ngAgterViewChecked');
   }

  ngOnInit() {
    this.log('ngOnInit');
  }
  ngDoCheck() {
    this.log('ngDocheck');
  }
  ngOnDestroy() {
    this.log('ngOnDestroy');
  }

  private log(hook: string){
    console.log(hook);
  }

}
