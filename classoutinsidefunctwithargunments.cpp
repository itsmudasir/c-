//Enter the numbers by user 
#include<iostream>
#include<string.h>
using namespace std;
class stu
{
int id;
int marks;
char name[34];
public:
	void getdata(int x,int y,char z[34]);
	void showdata();
};
int main()
{
	stu s;
	s.getdata(1,89,"Mudasir Aziz");
	s.showdata();
}
void stu::getdata(int x,int y,char z[34])
{
	id=x;
	marks=y;
	strcpy(name,z);
}
void stu::showdata()
{
	cout<<"Id ="<<id<<endl;
	cout<<"-----------------"<<endl;
	cout<<"marks ="<<marks<<endl;
	cout<<"-----------------"<<endl;
	cout<<"Name ="<<name<<endl;
}
