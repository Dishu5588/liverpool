#include<stdio.h>
int main()
{
	int i,j,sum,max,min,n;
	printf("\n enter the value of min and max:");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		n=i;
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			sum=sum+j;
		}
		if(sum==n)
		printf("\n %d",i);
	}
	return 0;
}
