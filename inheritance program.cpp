#include<iostream>
using namespace std;
class base
{
	public:
		int x;
		void display()
		{
			cout<<x<<endl;
		}
};
class derived:public base
{
	public:
		int y;
		void show()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	base b;
	b.x=25;
	b.display();
	derived d;
	d.x=50;
	d.y=100;
	d.display();
	d.show();
	return 0;
}
