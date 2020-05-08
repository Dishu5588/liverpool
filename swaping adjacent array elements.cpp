#include<stdio.h>
int main()
{
	int i,a[8]={10,20,30,40,50,60,70,80},temp;
	for(i=0;i<8;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	printf("\n elements after swap:");
	for(i=0;i<8;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
