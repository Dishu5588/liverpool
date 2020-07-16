#include<stdio.h>
int main()
{
	int i,pos,ele,n,a[10];
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the %d nos",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the position at which the element is to be enter:");
	scanf("%d",&pos);
	printf("\n enter the element is to be insert:");
	scanf("%d",&ele);
	n++;
	a[n-1]=ele;
	printf("\n the resultant array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
