#include<iostream>
using namespace std;
class base
{
	public:
	virtual	void display()
		{
			cout<<" display of base "<<endl;
		}
};
class derived:public base
{
	public:
		void display()
		{
			cout<<" display of derived "<<endl;
		}
};
int main()
{
	derived d;
	base *p=&d;
	p->display();
	return 0;
}
