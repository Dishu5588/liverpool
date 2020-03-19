#include<stdio.h>
int main()
{
	int i,num;
	printf("\n enter any num:");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		break;
	}
	if(i>num/2)
	printf("\n num is prime");
	else
	printf("\n num is not prime");
	return 0;
}
