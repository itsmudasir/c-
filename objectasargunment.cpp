//structure in c///
#include<iostream>
using namespace std;
class stu 
{
	public://here  i write so send the value of object at main function
	int a;
	public:
		void getdata();
		void showdata();
		void big(stu s2,stu s3,stu s4)
{
	int z;
	z=a+s2.a+s3.a+s4.a;
	cout<<z;
}
};
int main()
{
	stu s1,s2,s3,s4;//s1,s2,s3,s4 are object created
	s1.getdata();//calll function to getdata
	s2.getdata();
	s3.getdata();
	s3.a=100;//here i giving value of a of s3 as 100 //predefined value u can say
	s4.getdata();//here u can call but the deafult value is 100
	s1.big(s2,s3,s4);//s1 implict and s2,s3,s4 are explict we are giving as argunment
	//s1.showdata();
}
void stu::getdata()
{
	cout<<"Enter The Value Of A:";
	cin>>a;
}
void stu::showdata()// show what is the value of a its optional
{
	cout<<a;
}
