#include<iostream>
using namespace std;
int main()
{
	int x=10;
	auto f=[x] (){cout<<x<<endl;} ();
	f();
	return 0;
}
