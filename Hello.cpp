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
	ifstream file("stu.dat");
	file.read((char *)&a1,sizeof(a1));
	cout<<"id\t name\n";
	cout<<"_________________\n";
	while(!file.eof())
	{
		a1.show();
		file.read((char *)&a1,sizeof(a1));
		file.close();	
	}
	
	 
}
