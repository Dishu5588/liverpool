#include<iostream>
using namespace std;
namespace first
{
	void fun()
	{
		cout<<"first"<<endl;
	}
};
namespace second
{
	void fun()
	{
		cout<<"second"<<endl;
	}
};
using namespace second;
int main()
{
	fun();
	first::fun();
	return 0;
}
