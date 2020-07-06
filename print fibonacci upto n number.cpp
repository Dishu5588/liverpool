#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n %d \n %d",a,b);
	c=a+b;
	while(c<=15)
	{
		printf("\n %d",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
