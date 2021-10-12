#include<iostream>
using namespace std;
class sample
{
	int a;
	int b;
	public:
		sample()
		{
			a=10;
			b=12;
		}
		void show()
		{
			cout<<"A:"<<a<<endl;
			cout<<"B:"<<b;
		}
};
int main()
{
	sample s;
	s.show();
}
