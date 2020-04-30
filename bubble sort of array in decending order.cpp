#include<stdio.h>
int main()
{
	int i,a[5],j,temp;
	printf("\n enter 5 nos:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5-1;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n sorted array is:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
