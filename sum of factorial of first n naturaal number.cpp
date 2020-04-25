#include<stdio.h>
int main()
{
	int n,sum=0,i,j,fact=1;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=i;j>=1;j--)
		{
			fact=fact*j;
		}
		sum=sum+fact;
	}
	printf("\n sum of factorial of first %d natural no. is %d",n,sum);
	return 0;
}
