import { AppComponent } from './app.component';
import { BrowserModule } from '@angular/platform-browser';
import { DataBindingComponent } from './data-binding/data-binding.component';
import { FormsModule } from '@angular/forms';
import { HttpModule } from '@angular/http';
import { MeuFormModule } from "app/meu-form/meu-form.module";
import { NgModule } from '@angular/core';

@NgModule({
  declarations: [
    AppComponent,
    DataBindingComponent
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
