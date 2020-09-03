#include<iostream>
using namespace std;
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int main()
{
	int a=10,b=20,c;
	c=add(a,b);
	cout<<"addition of two number is "<<c<<endl;
	return 0;
}
