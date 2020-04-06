#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("\n enter the value of n :");
	scanf("%d",&n);
	printf("\n enter %d nos:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n array is ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
