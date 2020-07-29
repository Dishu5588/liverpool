#include<iostream>
using namespace std;
int main()
{
	int x=5,y;
	y=(2*++x)+(2*x++);
	cout<<x<<" "<<y;
	return 0;
}
