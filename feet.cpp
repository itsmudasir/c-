#include<iostream>
using namespace std;
class name
int a;
int b;
public:
	name()
	{
		a=10;
		b=10;
	}
	~name()
	{
		cout<<"A is Destoyed"<<a;
		cout<<"B is destroyed"<<b;
	}
	int main()
	{
		name s;
	}
