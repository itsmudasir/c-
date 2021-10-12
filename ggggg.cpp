//structure in c///
#include<iostream>
using namespace std;
class stu
{
	int a;
	int b;
	public:
		stu getdata(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void showdata()
{
	cout<<a<<b;
}
};
int main()
{
	stu s1;
	s1.getdata(2,4);
	s1.showdata();
}
