//access private data using function
#include<iostream>
using namespace std;
class stu
{
	int rollno;
	char name[30];
	public:
	void getdata()//function declare in private
	{
		cout<<"Enter The Rollno and Name:";
		cin>>rollno>>name;
}
			void show()//function declare in public to access the private function
			{
				cout<<"Roll no:"<<rollno<<endl;
				cout<<"Name:"<<name;
			}
};
int main()
{
	stu s1[5];
	for(int i=0;i<5;i++)
	{
		s1[i].getdata();
	}
	for(int i=0;i<5;i++)
	{
		cout<<endl;
		s1[i].show();
	}
	
	//s1.show();
}
