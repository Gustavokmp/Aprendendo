import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';
import { MeuFormComponent } from './meu-form.component';
import { NgModule } from '@angular/core';
@NgModule({
  imports: [
    CommonModule,
    FormsModule
  ],
  declarations: [MeuFormComponent],
  exports:[MeuFormComponent]
})
export class MeuFormModule { }
