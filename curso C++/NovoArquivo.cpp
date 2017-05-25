#include <iostream>

using namespace std;

int main(){
	int a, acumulador = 0,aux ,temp = 0,total = 0;
	bool achou = true;
	cin >> a;
	int vetor[a];
	for (int i = 0; i < a; i++){
		cin>>aux;
		vetor[i] = aux;
	}
	for(int i = 0; i < a; i++)
	{
		acumulador ++;
		if (vetor[i] < temp && achou){
			total = acumulador;
			achou = false;

		}
		temp = vetor[i];
	}
	cout<<total<<endl;

	
	return 0;
}