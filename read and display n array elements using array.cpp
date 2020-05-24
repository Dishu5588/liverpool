#include<stdio.h>
int main()
{
	int a[5],i,n;
	int *ptr;
	ptr=a;
	printf("\n entyer the value of n:");
	scanf("%d",&n);
	printf("\n enter the array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\n the number entered:");
	for(i=0;i<n;i++)
	{
		printf(" %d",*(ptr+i));
	}
	return 0;
}
