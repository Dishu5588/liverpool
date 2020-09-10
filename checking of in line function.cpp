#include<iostream>
using namespace std;
class test
{
	public:
		void fun1()
		{
			cout<<" in line "<<endl;
		}
		void fun2();
};
void test::fun2()
{
	cout<<" non in line ";
}
int main()
{
	test t;
	t.fun1();
	t.fun2();
	return 0;
}
