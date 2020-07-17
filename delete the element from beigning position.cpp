#include<stdio.h>
int main()
{
	int i,pos,n,a[10];
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the %d nos:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the position at which the element is to be deleted:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	printf("\n resultant array is:");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
