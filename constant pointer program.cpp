#include<iostream>
using namespace std;
int main()
{
	int x=555;
	int const *ptr=&x;
	//++*ptr;
	cout<<*ptr<<endl;
	return 0;
}
