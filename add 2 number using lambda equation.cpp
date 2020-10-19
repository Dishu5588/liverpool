#include<iostream>
using namespace std;
int main()
{
	cout<<([] (int x,int y) {return x+y;} (10,5));
	return 0;
}
