#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("\n %d factorial is %d",n,fact);
	return 0;
}
