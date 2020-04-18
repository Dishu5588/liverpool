#include<stdio.h>
int main()
{
	int i,j,k,sp=8;
	for(i=97;i<=101;i++)
	{
		for(k=97;k<=i;k++)
		{
			printf("%c",k);
		}
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(k=i;k>=97;k--)
		{
			printf("%c",k);
		}
		sp=sp-2;
		printf("\n");
	}
	return 0;
}
