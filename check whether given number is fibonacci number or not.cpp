#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	if(n==0)
	printf("\n fibonacci number");
	c=a+b;
	while(c<n)
	{
		a=b;
		b=c;
		c=a+b;
	}
	if(c==n)
	printf("\n fibonacci number");
	else
	printf("\n not a fibonacci number");
	return 0;
}
