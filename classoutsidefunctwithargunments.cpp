//function with paramenter and return type
#include<iostream>
#include<string.h>
using namespace std;
class stu
{
int a;
int b;
public:
void getdata(int x,int y)
{
	a=x;
	b=y;
	}	
	int showdata()
	{
		int c;
		c=a+b;
		return c;
	}
};
int main()
{
stu s;
s.getdata(10,23);
int m=s.showdata();
cout<<m;
}
