//structure in c///
#include<iostream>
using namespace std;
class sample
{
int a;
int b;
public:
void getdata()
{
	a=10;
	b=20;
	}	
	sample big(sample s2)
	{
		sample temp;
		temp.a=a+s2.a;
		temp.b=b+s2.b;
		return temp;
		//cout<<temp.a<<endl;
		//cout<<temp.b<<endl;
	}
	void show()
	{
		cout<<"s1:10+s2:10="<<a<<endl;
		cout<<"s1:20+s2:20="<<b<<endl;
	}
};
int main()
{
	sample s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3=s1.big(s2);
	
	s3.show();
	//cout<<s1.a;
}
