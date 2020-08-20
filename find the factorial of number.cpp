#include<iostream>
using namespace std;
int main()
{
	int fact=1,n,i;
	cout<<" enter the value of n";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	cout<<" factorial of "<<n<<" is "<<fact;
	return 0;
}
