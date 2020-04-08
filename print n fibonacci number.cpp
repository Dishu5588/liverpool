#include<stdio.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n %d",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
