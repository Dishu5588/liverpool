#include<iostream>
using namespace std;
class base
{
	public:
		void fun1()
		{
			cout<<" fun 1 of base"<<endl;
		}
};
class derived:public base
{
	public:
		void fun2()
		{
			cout<<"fun2 of derived"<<endl;
		}
};
int main()
{
	derived d;
	base *p=&d;
	p->fun1();
	return 0;

}

