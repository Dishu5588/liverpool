#include<stdio.h>
int main()
{
	int n,i;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("\n %d is the factor of %d",i,n);
	}
	return 0;
}
