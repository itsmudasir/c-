#include<iostream>
using namespace std;
class sample
{
	int a;
	public:
		void show()
		{
			cout<<"A:"<<a<<endl;
		}
		sample(int a)
		{
			this->a=a;
		}
		sample(sample &old)
		{
			a=a.old;
		}
};
int main()
{
	sample s1(44);
	sample s2(s1);
	s1.show();
	s2.show();
}
