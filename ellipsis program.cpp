#include<iostream>
using namespace std;
int sum (int n,...)
{
	va_list list;
	va_start (list,n);
	int x;
	int s=0;
	for(int i=0;i<n;i++)
	{
		x=va_arg(list,int);
		s+=x;
	}
	va_end(list);
	return s;
}
int main()
{
	sum(4,10,20,30,40);
	sum(5,10,20,30,40,50);
	return 0;
}
