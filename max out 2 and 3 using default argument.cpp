#include<iostream>
using namespace std;
int max(int a,int b=0,int c=0)
{
	return a>b&&a>c?a:b>c?b:c;
}
int main()
{
	cout<<max(50,49)<<endl;
	cout<<max(50,56,45)<<endl;
	cout<<max(55)<<endl;
	return 0;
}

