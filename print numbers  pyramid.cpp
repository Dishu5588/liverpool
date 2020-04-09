#include<stdio.h>
int main()
{
	int i,j,sp=5,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		for(k=2;k<=i;k++)
		{
			printf("%d",k);
		}
		sp=sp-1;
		printf("\n");
	}
	return 0;
}
