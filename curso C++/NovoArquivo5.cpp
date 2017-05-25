#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int num,qtd,bom = 0,ruim = 0;
	cin>>qtd;
	while(qtd--)
	{
		cin>>num;
		if(num == 0) bom++;
		else{
		ruim ++;
		}
	}
	if(bom > ruim) cout<<"Y"<<endl;
	else{
		cout<<"N"<<endl;
	}
	return 0;
}