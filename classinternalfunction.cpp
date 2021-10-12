//structure in c///
#include<iostream>
using namespace std;
class stu
{
	int a;
	int b;
	public:
	void getdata();
	void showdata();
};
void stu::getdata()
{
	a=10;
	b=12;
}
void stu::showdata()
{
	cout<<"A="<<a<<endl;
	cout<<"B="<<b;
}
int main()
{
	stu s1;
	s1.getdata();
	s1.showdata();
}
