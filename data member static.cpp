#include<iostream>
using namespace std;
class test
{
	public:
		int a;
		int b;
	static int count;
	test ()
	{
		a=10;
		b=15;
		count++;
	}
};
int test::count=0;
int main()
{
	test t1,t2;
	cout<<t1.count<<endl;
	cout<<t2.count<<endl;
	return 0;
}
