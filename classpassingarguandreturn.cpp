//function with paramenter and return type
#include<iostream>
#include<string.h>
using namespace std;
class stu
{
int a;
public:
	void getdata()
	{
		cout<<"Enter the Data:";
		cin>>a;
	}
	void big(stu s2)
	{
	if(a>s2.a)
	else
	cout<<"s2 is greater";	
}	};
int main()
{
	stu s1,s2;
	s1.getdata();
	s2.getdata();
	s1.big(s2);
}
