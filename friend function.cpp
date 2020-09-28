#include<iostream>
using namespace std;
class base
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
	friend void fun();
};
void fun()
{
	base b;
    b.a=20;
    b.b=25;
    b.c=30;
}
int main()
{
	return 0;
}
