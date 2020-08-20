#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"enter the two number ";
	cin>>m>>n;
	while(m!=n)
	{
		if(m>n)
		m=m-n;
		else
		n=n-m;
	}
	cout<<" gcd is "<<m;
	return 0;
}
