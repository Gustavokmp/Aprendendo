#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(a == b) cout<<a<<endl;
	else
	{
		cout<<((a+b)+(abs(a-b)))/2<<endl;
	}
}