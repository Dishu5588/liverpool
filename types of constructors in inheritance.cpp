#include<iostream>
using namespace std;
class base
{
	public:
	base()
	{
		cout<<" default of base"<<endl;
	}
	base(int x)
	{
		cout<<"param of base"<<x<<endl;
	}
};
class derived:public base
{
	public:
	derived()
	{
		cout<<" default of derived";
	}
	derived(int a)
	{
		cout<<" param of derived"<<a<<endl;
	}
};
int main()
{
	derived d;
	return 0;
}
