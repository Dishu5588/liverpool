#include<iostream>
using namespace std;
void fun(const int x, int y)
{
	//x++;
	cout<<x<<" "<<y<<endl;
}
int main()
{
	int a=10;
	int b=20;
	fun(a,b);
	return 0;
}
