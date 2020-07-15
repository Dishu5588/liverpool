#include<stdio.h>
int main()
{
	int i,pos,n,ele,a[10];
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the %d nos",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the pos at which element is to be inserted:");
	scanf("%d",&pos);
	printf("\n enter the element is to be inserted:");
	scanf("%d",&ele);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=ele;
	printf("\n the resultant array is :");
	for(i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
