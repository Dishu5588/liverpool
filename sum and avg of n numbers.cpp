#include<stdio.h>
int main()
{
	int i,n,num,sum=0;
	float avg;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n enter number:");
		scanf("%d",&num);
		sum=sum+num;
		
	}
	printf("\n sum of %d is %d",n,sum);
	avg=(float)sum/n;
	printf("\n avg of %d is %f",n,avg);
	return 0;
}
