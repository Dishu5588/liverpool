#include<stdio.h>
int main()
{
	int i,j,sp=5,k,n=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(k=i;k<=n;k++)
		{
			printf("%d",k);
		}
		for(k=n-1;k>=i;k--)
		{
			printf("%d",k);
		}
		sp=sp-1;
		n=n+2;
		printf("\n");
	}
	return 0;
}
