#include<stdio.h>
int main()
{
	int a[10],n,i,sum=0;
	int *ptr=a;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the %d nos",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("\n sum of array is %d",sum);
	return 0;
}
