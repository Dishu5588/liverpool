#include<stdio.h>
int main()
{
	int i,a[5]={10,20,30,40,50},b[5]={60,70,80,90,100},temp;
    for(i=0;i<5;i++)
    {
    	temp=a[i];
    	a[i]=b[i];
    	b[i]=temp;
	}
	printf("\n array a after swap:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n array b after swap:");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
