#include<stdio.h>
int main()
{
	int i,a[5],temp;
	printf("\n enter 5 nos:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=0;i<=3;i++)
	{
		a[i]=a[i+1];
	}
	a[4]=temp;
	printf("\n enter the resultant array:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
