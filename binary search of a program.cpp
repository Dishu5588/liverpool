#include<iostream>
using namespace std;
int main()
{
	int a[10]={6,8,15,17,20,22,25,28,30,35};
	int l=0,h=9,m,num;
	cout<<" enter the number to search ";
	cin>>num;
	while(l<=h)
	{
		m=(l+h)/2;
		if(num==a[m])
		{
		cout<<" number is at "<<m;
		return 0;
	    }
	    else if(num<a[m])
	    h=m-1;
	    else
	    l=m+1;
	}
	cout<<" number is not found"<<endl;
	return 0;
}
