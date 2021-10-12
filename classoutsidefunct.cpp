//Enter the numbers by user 
#include<iostream>
using namespace std;
class stu
{
	int a;
	int b;
	public:
	void getdata();//function declration//prototype
	void showdata();
};
void stu::getdata()//function definition outside the class//
{//for this we scope resoulution operator
	cout<<"Enter the Value Of A and B:"<<endl;
	cin>>a>>b;
}
void stu::showdata()
{
	cout<<"A="<<a<<endl;
	cout<<"B="<<b;
}
int main()
{
	stu s1;//s1 object
	s1.getdata();//s1 calling function
	s1.showdata();//s1 calling function
}
