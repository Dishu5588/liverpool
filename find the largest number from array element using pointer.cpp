#include<stdio.h>
int main()
{
	int a[5],n,i,large=0,pos=0;
	int *ptr=a,*plarge=&large;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the element are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)>*plarge)
		*plarge=*(ptr+i);
		pos=i;
	}
	printf("\n number entered is:");
	for(i=0;i<n;i++)
	{
		printf(" %d",*(ptr+i));
	}
	printf("\n largest number in array element is %d",*plarge);
	printf("\n position of largest number is %d",pos);
	return 0;
}
