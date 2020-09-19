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
	
};
int main()
{
	base b;
	b.x=50;
	b.display();
	derived d;
	d.x=100;
	d.display();
	return 0;
}
