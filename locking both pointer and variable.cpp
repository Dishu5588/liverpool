#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int y=20;
	const int * const ptr=&x;
	//++*ptr;     because in this we locked both variable and pointer.......
	//ptr=&y;
	cout<<*ptr<<endl;
	return 0;
}
