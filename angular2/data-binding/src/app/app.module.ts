import { AppComponent } from './app.component';
import { BrowserModule } from '@angular/platform-browser';
import { DataBindingComponent } from './data-binding/data-binding.component';
import { FormsModule } from '@angular/forms';
import { HttpModule } from '@angular/http';
import { MeuFormModule } from "app/meu-form/meu-form.module";
import { NgModule } from '@angular/core';
import { InputPropertyComponent } from './input-property/input-property.component';
import { OutputPropertyComponent } from './output-property/output-property.component';
import { CicloComponent } from './ciclo/ciclo.component';

@NgModule({
  declarations: [
    AppComponent,
    DataBindingComponent,
    InputPropertyComponent,
    OutputPropertyComponent,
    CicloComponent
  ],
  imports: [
    BrowserModule,
    FormsModule,
    HttpModule,
    MeuFormModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
