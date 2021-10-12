//copy constructor is used copy the data from another object;
//using refrence variable getting value from implict object;
//object as argunment;
#include<iostream>
using namespace std;
class sample
{
	int a;
	int b;
	public:
	sample(int a,int b)//parametrized constructor argunmennt
	{
		this->a=a;//get value to a without confusing comiler
		this->b=b;
	}
	sample(sample &old)//reciveing object as argunment
	{
		a=old.a;//copy data from old object to new;
		b=old.b;
	}
	void show()
	{
		cout<<a;
		cout<<b;
	}
};
int main()
{
	sample s1(9,9);//giving value to paramerixed constructor
	sample s2(s1);//giving object s1 as argunment to s2
	s1.show();//show s1
	s2.show();//show s2
}
