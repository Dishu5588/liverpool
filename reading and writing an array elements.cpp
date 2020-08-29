#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n;
	cout<<" enter the value of n:";
	cin>>n;
	cout<<" enter array elements ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<" array elements are:";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<endl;
	return 0;
}
