#include<stdio.h>
int main()
{
	int pos,i,n,a[10];
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the %d nos",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the resultant array is:");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
