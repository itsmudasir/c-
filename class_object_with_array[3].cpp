//access private data using function
#include<iostream>
using namespace std;
class stu
{
	int id;
	int marks[5];
	char name[30];
	public:
		void getdata()
		{
			cout<<"Enter the Id And Name:"<<endl;
			cin>>id>>name;
			cout<<"Enter the 5 Subject Marks:";
			for(int i=0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
		void showdata()
		{
			cout<<id<<name;
				int total;
				float avg;
			for(int i=0;i<5;i++)
			{
				total=total+marks[i];
				//cout<<"THe Average Of Marks Is:::";
				//cout<<endl;
				//cout<<"\t"<<marks[i];
			}
			avg=total/5;
			cout<<"THe Average Of Marks Is:::"<<avg;
			
			
		}
};
int main()
{
	stu s1;
	s1.getdata();
	s1.showdata();
}

