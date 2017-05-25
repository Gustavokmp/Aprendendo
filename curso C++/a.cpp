#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	int qtd,num,acumulador;
	cin>> qtd;
	while(qtd--)
	{
		cin >> num;
		acumulador = 0;
		for(int i = 0; i < num; i++)
		{
			acumulador += pow(2,i);
		}
		cout<<acumulador<<endl;
	}
	return 0;
}