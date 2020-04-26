#include<stdio.h>
int main()
{
	int n,i,sum=0,sq;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=2;i<=n*2;i+=2)
	{
		sq=i*i;
		sum=sum+sq;
	}
	printf("\n sum of square of %d is %d",n,sum);
	return 0;
}
