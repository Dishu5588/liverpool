#include<iostream>
using namespace std;
int main()
{
	int a=10,b=5;
	{
		int c=a+b;
		if(c>10)
		{
			cout<<c;
		}
	}
	return 0;
}
