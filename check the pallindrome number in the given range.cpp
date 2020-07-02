#include<stdio.h>
int main()
{
	int n,max,min,temp,i,rem,rev=0;
	printf("\n enter the min and max values:");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		n=i;
		temp=n;
		rev=0;
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		if(rev==temp)
		printf("\n %d",i);
	}
	return 0;
}
