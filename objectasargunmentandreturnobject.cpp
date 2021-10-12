//structure in c///
#include<iostream>
using namespace std;
class stu
{
	int a;
	int b;
	public:
		void getdata()
		{
			cout<<"Enter the Data:A"<<endl;
			cin>>a;
			cout<<"Enter the Data:B"<<endl;
			cin>>b;
		}
		void show()
		{
		cout<<"A : "<<a<<endl;
		cout<<"B : "<<b<<endl;
	}
	stu big(stu s2)
	{
		stu temp;
		temp.a=a+s2.a;
		temp.b=a+s2.b;
		return temp;
	}
};
int main()
{
	stu s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3=s1.big(s2);
	s3.show();
}
