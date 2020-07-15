#include<stdio.h>
int main()
{
	int i,pos,a[10],b[10],n,m;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the value of m:");
	scanf("%d",&m);
	printf("\n enter %d nos",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter %d nos",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n enter the pos at which the element to be inserted:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		a[i+m]=a[i];
	}
	for(i=0;i<m;i++)
	{
		a[pos+i]=b[i];
	}
	printf("\n resultant array is:");
	for(i=0;i<m+n;i++)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}
