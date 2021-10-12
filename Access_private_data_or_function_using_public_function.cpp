//access private data using function
#include<iostream>
using namespace std;
class stu
{
	int a[10];
	void getdata()//function declare in private
	{
		cout<<"enter the arary:";
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
		}	
		public:
			void show()//function declare in public to access the private function
			{
				getdata();//here we must have to call it to work.
				for(int i=0;i<5;i++)
				{
			
				cout<<a[i];
			}
			}
};
int main()
{
	stu s1;
	//s1.getdata();//this function will not work because it is private and cant access here it shows error if we run
	s1.show();//s1 function and getdata function also work which is the show function
}
