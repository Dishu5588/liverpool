#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int const *ptr=&x;
	//++*ptr;
	int y=20;
	ptr=&y;
	//++*ptr;
	cout<<*ptr<<endl;
	return 0;
}
