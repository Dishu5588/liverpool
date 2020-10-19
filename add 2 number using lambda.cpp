#include<iostream>
using namespace std;
int main()
{
	int a=[] (int x,int y)-> int {return x+y;} (10,5);
	cout<<a<<endl;
	return 0;
}
