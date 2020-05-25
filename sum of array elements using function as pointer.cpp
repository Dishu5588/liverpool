#include<stdio.h>
int sumarr(int *);
int main()
{
	int a[5],i,sum;
	int *ptr=a;
	printf("\n enter 5 nos for array a:");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	sum=sumarr(a);
	printf("\n sum of array elements is %d",sum);
	return 0;
}
int sumarr(int *x)
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+*(x+i);
	}
	return sum;
}
