#include<iostream>
using namespace std;
class sample
{
	int a;
	int b;
	public:
	sample(int a,int b)
	{
		int temp;//we cant return because it is constructor
		temp=a+b;
		cout<<"Plus Of Two Numbers:"<<temp<<endl;
	}
	void showdata()
	{
		cout<<"A:"<<a<<endl;
		cout<<"B:"<<b;
	}
	sample()
	{
		a=10;
		b=12;
	}
	void show()
	{
		cout<<"A:"<<a<<endl;
		cout<<"B:"<<b;
	}    
};
int main()
{
	sample s;
	sample s2(10,10);
	s.show();

}
