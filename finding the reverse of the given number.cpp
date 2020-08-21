#include<iostream>
using namespace std;
int main()
{
	int sum=0,n,r;
	cout<<" enter the value of n:";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	cout<<" reverse of a number is"<<sum;
	return 0; 
}
