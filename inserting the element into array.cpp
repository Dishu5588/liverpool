#include<stdio.h>
int main()
{
	int a[10],i,ele,pos,n;
	printf("\n enter the size of array:");
	scanf("%d",&n);
	printf("\n enter the %d number",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the element to insert:");
	scanf("%d",&ele);
	printf("\n enter the position at which the element to be inserted:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=ele;
	printf("\n the resultant array is:");
	for(i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
