//Enter the numbers by user 
#include<iostream>
#include<string.h>
using namespace std;
class stu
{
int id;
int rollno;
char name[30];
public:
void getdata(int x,int y,char z[30]);
void showdata();	
};
void stu::getdata(int x,int y,char z[30])
{
	id=x;
	rollno=y;
	strcpy(name,z);
}
void stu::showdata()
{
	cout<<id<<endl;
	cout<<rollno<<endl;
	cout<<name<<endl;
}
int main()
{

stu s;
s.getdata(1,1,"Mudasir");
s.showdata();
}
