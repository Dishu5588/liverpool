#include<iostream>
using namespace std;
int main()
{
	int a[5]={2,4,6,8,10};
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	cout<<"sum of the array elements is "<<sum;
	return 0;
}
