#include <iostream>
#include <stdlib.h>     /* atoi */

using namespace std;

int main(int argc, char** argv)
{
	while(true){
		string entrada,saida;
		cin>>entrada;
		bool ok = false;
		string valido[10] ={"0","1","2","3","4","5","6","7","8","9"};
		for(int i = 0 ; i < entrada.size(); i++){
			cout<<saida<<endl;
			cout<<"saida em cima"<<endl;
			if(entrada[i] == 'O' || entrada[i] == 'o'){
				saida += '0';
				cout<<"letra O"<<endl;
			}
			else if(entrada[i] == 'I'){
				saida += '1';
				cout<<"letra I"<<endl;
			}
			else{
				for(int j = 0 ; j < 10;j++){
					int a = atoi(entrada[i].c_str());
					int b = atoi(valido[j].c_str());
					if(a = b){
						saida += entrada[i];
						ok = false;
						cout<<"numero"<<endl;
						break;
					}
					else{
						ok = true;
					}
				}
			}
		}
		cout<<saida<<endl;
	}
	return 0;
}