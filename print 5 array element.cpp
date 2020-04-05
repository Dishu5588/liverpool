#include<stdio.h>
int main()
{
	int a[5],i;
	printf("\n enter 5 nos:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n array is:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
