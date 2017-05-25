#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int cont = 1;
	while(true)
	{
		int lista[200];
		int pessoa,consumo,qtd_casas,aux, aux2;
		float total_pessoas = 0.0,total_consumo = 0.0,media;
		cin>>qtd_casas;
		if(qtd_casas == 0) break;
		cout<<"Cidade# "<<cont<<":"<<endl;
		cont++;
		for(int i = 0; i <= 200; i++){
			lista[i] = 0;
		}
		aux = qtd_casas;
		while(qtd_casas--){
			cin>>pessoa;
			cin>>consumo;
			total_pessoas += pessoa;
			total_consumo += consumo;
			if(lista[consumo/pessoa] != 0) aux--;
			lista[consumo/pessoa] += pessoa;
		}
		for(int i = 0; i <= 200; i++ ){
			if(lista[i] != 0){
				aux--;
				printf("%d-%d",lista[i],i);
				if(aux != 0) cout<<" ";
			}
			if(aux == 0){
				break;
			}
		}
		cout<<endl;
		aux2 = ((total_consumo/total_pessoas)*100);
		media = aux2/100.00;
		printf("Consumo medio: %.2f m3.",media);
		cout<<endl;
		cout<<endl;
	}
	return 0;
}