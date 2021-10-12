#include<iostream>
#include<string.h>
using namespace std;
class stu
{
	int id;
	char name[20];
	float fee;
	public:
	stu(int id,char name[20])
	{
		this->id=id;
		strcpy(this->name,name);
		fee=0;
	}
	stu(int id,char name[20],float fee)
	{
		this->id=id;
		strcpy(this->name,name);
		this->fee=fee;
	}
	void show()
	{
		cout<<endl;
		cout<<id<<name<<fee;
	}
};
int main()
{
	stu s(1,"mudasir");
	stu s2(1,"mudasir",100);
	//s1.show();
	s2.show();
}
