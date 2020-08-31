#include<iostream>
using namespace std;
int main()
{
	int a[2][3]={2,4,6,8,10,12};
	int b[2][3]={3,6,9,12,15,18};
	int c[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<" resultant array is"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
