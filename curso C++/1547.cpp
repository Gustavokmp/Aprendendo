#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int qtd;
	cin>>qtd;
	while(qtd--){
		int alunos = 0,numero_secreto = 0;
		cin>>alunos;
		cin>>numero_secreto;
		int lista[alunos],aux;
		bool achou = false;
		for(int i = 0; i < alunos; i++){
			cin>>aux;
			lista[i] = aux;
		}
		for(int i = 0; i < alunos; i++){
			if(lista[i] == numero_secreto){
				cout<<i+1<<endl;
				achou = true;
				break;
			}
			lista[i] = lista[i] - numero_secreto;
		}
		if(!achou){
			bool verifica = false;
			int n1,n2,p;
			for(int i = 0; i <= 100; i++){
				n1 = i;
				n2 = i*-1;
				for(int j = 0; j < alunos; j++){
					p = lista[j];
					if(lista[j] == n1 || lista[j] == n2){
						cout<<j+1<<endl;
						verifica = true;
						break;
					}
				}
				if(verifica) break;
			}
			
		}
		numero_secreto = 0;
		aux = 0;
		achou = false;
		
	}
	return 0;
}