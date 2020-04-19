#include<stdio.h>
int main()
{
	int i,j,sp=1,k,n=7;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n;k++)
		{
			printf("*");
		}
		printf("\n");
		sp=sp+1;
		n=n-2;
	}
	return 0;
}
