#include<iostream>
using namespace std;
int main()
{
	int a[10][10];
	int b[10][10];
	int c[10][10];
	int i,j,k,r1,c1,r2,c2;
	cout<<"enter the order for matrix a:";
	cin>>r1>>c1;
	cout<<" enter the order for matrix b:";
	cin>>r2>>c2;
	if(c1==r2)
	{
		cout<<" enter the matrix a:";
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cin>>a[i][j];
			}
			cout<<endl;
		}
		cout<<" enter the matrix b:";
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				cin>>b[i][j];
			}
			cout<<endl;
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<r2;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
			cout<<endl;
		}
		cout<<" the resultant matrics is:"<<endl;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else
	cout<<" not possible ";
	return 0;
}
