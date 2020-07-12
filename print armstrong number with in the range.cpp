#include<stdio.h>
int main()
{
	int temp,i,j,min,max,sum,r,n;
	printf("\n enter the value of min and max:");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		n=i;
		temp=n;
		sum=0;
		while(n!=0)
		{
			r=n%10;
			sum=sum+(r*r*r);
			n=n/10;
		}
		if(temp==sum)
		printf("\n %d",i);
	}
	return 0;
}
