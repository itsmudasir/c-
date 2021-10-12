#include<fstream>
#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//int main()
//{
	// start all here
class account
{
	char name[30];
	int id;
	public:
		void getdata()
		{
			cout<<"Enter the Id:";
			cin>>id;
			cout<<"Enter The Name:";
			cin>>name;
		}
		void show()
		{
			cout<<"The Id Name Is :";
			cout<<id<<endl;
			cout<<"The Name Is :";
			cout<<name<<endl;
		}
};
int main()
{
	account a1;
	ofstream file("stu.dat");
	//a1.getdata();
	//a1.show();
//	ofstream file;
//	file.open("stu.dat");
	char op;
	do
	{
		a1.getdata();
		file.write((char *)&a1,sizeof(a1));
		cout<<"Row Entered sucessfully:\n";
		cout<<"Any More [Y or N]";
		cin>>op;
		//a1.show();
	}
	while(op=='Y'||op=='y');
	file.close();

}
