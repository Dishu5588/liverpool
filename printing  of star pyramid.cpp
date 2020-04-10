#include<stdio.h>
int main()
{
	int i,j,sp=4,n=1,k;
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
		sp=sp-1;
		n=n+2;
		printf("\n");
	}
	return 0;
}
