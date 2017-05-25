#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char *argv[])
{
	int tamanho,qtd;
	cin>>tamanho;
	cin>>qtd;
	int matriz[tamanho][tamanho];
	for(int i = 0; i < tamanho; i++){
		for(int j = 0; j < tamanho; j++){
			matriz[i][j] = 0;
		}
	}
	int codigo,x,r,valor,qtd_repeticoes,vez;
	while(qtd--){
		
		cin>>codigo;
		int contador;
		switch(codigo)
		{
			case 1:
				cin>>x;
				cin>>r;
				for(int i = 0; i < tamanho; i++){
					matriz[x-1][i] = r;
				}
				break;
			case 2:
				cin>>x;
				cin>>r;
				for(int i = 0; i < tamanho; i++){
					matriz[i][x-1] = r;
				}
				break;
			case 3:
				cin>>x;
				contador = 0;
				valor = 0;
				qtd_repeticoes = 0;
				for(int i = 0; i < tamanho; i++){
					vez = matriz[x-1][i];
					contador = 0;
					for(int j = 0; j < tamanho; j++){
						if(matriz[x-1][j] == vez){
							contador++;
							}
						}
						if(contador > qtd_repeticoes){
							qtd_repeticoes = contador;
							valor = vez;
							}
						else if(contador == qtd_repeticoes && valor < vez){
							valor = vez;
							}
						}
				cout<<valor<<endl;
				break;
			case 4:
				cin>>x;
				contador = 0;
				valor = 0;
				qtd_repeticoes = 0;
				for(int i = 0; i < tamanho; i++){
					vez = matriz[i][x-1];
					contador = 0;
					for(int j = 0; j < tamanho; j++){
						if(matriz[j][x-1] == vez){
							contador++;
						}
					}
					if(contador > qtd_repeticoes){
						qtd_repeticoes = contador;
						valor = vez;
					}
					else if(contador == qtd_repeticoes && valor < vez){
						valor = vez;
					}
				}
				cout<<valor<<endl;
				break;
		}
	}
	return 0;
}