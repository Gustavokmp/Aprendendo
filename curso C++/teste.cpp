#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int qtd,bonus,atkD,defD,levelD,atkG,defG,levelG,daniel,guarte;
	cin>> qtd;
	while(qtd--)
	{
		cin>>bonus;
		cin>>atkD>>defD>>levelD;
		cin>>atkG>>defG>>levelG;
		daniel = (atkD+defD)/2;
		guarte = (atkG+defG)/2;
		if (levelD%2 == 0) daniel += bonus;
		if (levelG%2 == 0)guarte += bonus;
		if (daniel > guarte) cout<<"Dabriel"<<endl;
		if ( guarte > daniel) cout<<"Guarte"<<endl;
		if (daniel == guarte) cout<<"Empate"<<endl;
	}
	return 0;
}