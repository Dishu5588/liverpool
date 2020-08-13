#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0,temp;
	cout<<" enter the value of n:";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(sum==temp)
	cout<<" number is palindrome"<<endl;
	else
	cout<<" not a palindrome"<<endl;
	return 0;
}
