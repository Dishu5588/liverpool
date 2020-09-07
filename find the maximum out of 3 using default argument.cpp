#include<iostream>
using namespace std;
int max(int a,int b,int c=0)
{
	return a>b&&a>c? a:b>c?b:c;
}
int main()
{
	cout<<max(10,25,45)<<endl;
	cout<<max(36,85)<<endl;
	return 0;
}
