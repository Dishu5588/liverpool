#include<iostream>
using namespace std;
class base
{
	public:
	void fun1()
		{
			cout<<" fun 1 from base "<<endl;
		}
		virtual void fun2()=0;
};
class derived:public base
{
	public:
		void fun2()
		{
			cout<<" fun 2 from derived "<<endl;
		}
};
int main()
{
	base *p=new derived();
	p->fun1();
	p->fun2();
	return 0;
}
