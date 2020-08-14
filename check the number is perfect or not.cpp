#include<iostream>
using namespace std;
int main()
{
	int sum=0,i,n;
	cout<<"enter the value of n ";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	cout<<" perfect number "<<endl;
	else
	cout<<" not a perfect number "<<endl;
	return 0;
	
}
