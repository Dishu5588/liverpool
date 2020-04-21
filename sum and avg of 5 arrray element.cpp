#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	float avg;
	printf("\n enter 5 nos:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("\n sum of 5 nos is %d",sum);
	avg=(float)sum/5;
	printf("\n avg is %f",avg);
	return 0;
}
