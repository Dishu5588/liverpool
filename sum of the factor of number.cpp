#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("\n enter any num:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	printf("\n sum of the factor of %d is %d",num,sum);
	return 0;
}
