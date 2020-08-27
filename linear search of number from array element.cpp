#include<iostream>
using namespace std;
int main()
{
	int a[10],i,num;
	cout<<" enter 10 number:";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<" enter the number to search ";
	cin>>num;
	for(i=0;i<10;i++)
	{
		if(num==a[i])
		{
		cout<<" number is found at "<<i;
		return 0;
	    }
	}
	cout<<" number is not found "<<endl;
	return 0;
}
