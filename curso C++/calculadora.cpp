#include <iostream>

using namespace std;

int main(){
	int num1 , num2;
	char op;
	cout << "Digite um numero:\n";
	cin >> num1;
	cout << "digite outro numero:\n";
	cin >> num2;
	cout << "digite a operacao:\n";
	cin >> op;
	switch(op)
	{
	case '+':
		cout << num1+num2;
		break;
	case '-':
		cout << num1-num2;
		break;
	case '*':
		cout << num1*num2;
		break;
	case '/':
		cout << num1/num2;
		break;
	}
	
	return 0;
}