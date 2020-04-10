#include<stdio.h>
int main()
{
	int i,j,k,sp=0;
	for(i=5;i>=1;i--)
	{
	
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
	    for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
	    for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
	
		sp=sp+2;
		printf("\n");
	}
	return 0;
}
