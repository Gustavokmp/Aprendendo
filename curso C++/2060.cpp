#include <iostream>

using namespace std;

int multiplo2(int num)
{
	if(num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int multiplo3(int num)
{
	if (num%3 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int multiplo4(int num)
{
	if(num%4 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int multiplo5(int num)
{
	if(num%5 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(int argc, char** argv)
{
	int qtd,m2 = 0,m3 = 0,m4 = 0,m5 = 0,aux;
	cin>>qtd;
	int vetor[qtd];
	for(int i = 0; i < qtd;i++){
		cin>>aux;
		vetor[i] = aux;
	}
	for(int i = 0; i < qtd; i ++){
		m2 += multiplo2(vetor[i]);
		m3 += multiplo3(vetor[i]);
		m4 += multiplo4(vetor[i]);
		m5 += multiplo5(vetor[i]);
	}
	cout<<m2<<" Multiplo(s) de 2"<<endl;
	cout<<m3<<" Multiplo(s) de 3"<<endl;
	cout<<m4<<" Multiplo(s) de 4"<<endl;
	cout<<m5<<" Multiplo(s) de 5"<<endl;
	return 0;
}