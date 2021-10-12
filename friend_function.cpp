//simple friend function//
#include<iostream>
using namespace std;
class sample
{
	int a;
	int b;
	friend void show(sample);
	public:
		sample()
		{
			a=10;
			b=20;
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
void show(sample s)//defention of friend function
//object as argument so we use s.a;
{
	//s.a=99;
	//s.b=99;
	cout<<s.a;
	cout<<s.b;//
}
int main()
{
	sample s;//object created using constructor//
	show(s);//object as argunment beacause it uses only copy of the object
//show() as normal function because it not member function
//show() dont use dot operator here
}
