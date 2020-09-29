#include<iostream>
using namespace std;
class test
{
	public:
		int a;
	static int count;
	test()
	{
		a=10;
		count++;
	}
	static int getcount()
	{
		return count ;
	}
};
int test::count=0;
int main()
{
	test t1,t2;
	cout<<test::getcount()<<endl;
	t2.count=25;
	cout<<t1.count<<endl;
	return 0;
}
