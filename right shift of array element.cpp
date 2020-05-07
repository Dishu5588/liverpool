#include<stdio.h>
int main()
{
	int i,a[5]={10,20,30,40,50},temp;
	temp=a[4];
	for(i=4;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	printf("\n enter the resultant array:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
