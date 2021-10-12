//structure in c///
#include<iostream>
using namespace std;
class stu
{
	int a;
	int b;
	void getdata()
	{
		cout<<"Enter the data of A and B:";
		cin>>a>>b;
		}	
		public:
			void show()
			{
				getdata();
				cout<<a<<b;
			}
};
int main()
{
	stu s1;
	s1.show();
}
