#include<iostream>
using namespace std;
int main()
{
	int a[2][3]={{2,4,6},{8,10,12}},i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
