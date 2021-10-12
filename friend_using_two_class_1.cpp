#include<iostream>
using namespace std;
class sample1;
class sample
{
	int a;
	public:
		void getdata()
		{
			cout<<"Enter the A:";
			cin>>a;
		}
		friend int sum(sample,sample1);
};
class sample1
{
	int b;
	public:
		void getdata()
		{
			cout<<"Enter The Value Of B:";
			cin>>b;
		}
		friend int sum(sample,sample1);
};
int sum(sample s1,sample1 s2)
{
	return(s1.a*s2.b);
}
int main()
{
	sample s1;
	sample1 s2;
	s1.getdata();
	s2.getdata();
	int x=sum(s1,s2);
	cout<<"Some of Two numbers:"<<x;
}
