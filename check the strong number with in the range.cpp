#include<stdio.h>
int main()
{
	int i,j,sum,fact,min,max,n,temp,r;
	printf("\n enter the value of min and max:");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		n=i;
		temp=n;
		sum=0;
		while(n!=0)
		{
		fact=1;
		r=n%10;
		for(j=r;j>=1;j--)
		{
			fact=fact*j;
		}
		sum=sum+fact;
		n=n/10;
	    }
		if(sum==temp)
		printf("\n %d",i);
	}
	return 0;
}
