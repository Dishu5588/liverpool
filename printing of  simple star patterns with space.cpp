#include<stdio.h>
int main()
{
	int i,j,k,sp=5,n=1;
	for(i=1;i<=5;i++)
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
		sp=sp-1;
		n=n+1;
	}
	return 0;
}
