#include<iostream>
using namespace std;
int main()
{
	int r,sum=0,n,temp;
	cout<<" enter the value of n:";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==temp)
	cout<<" armstrong number"<<endl;
	else
	cout<<" not a ramstrong number"<<endl;
	return 0;
}
