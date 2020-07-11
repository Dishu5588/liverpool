#include<stdio.h>
int main()
{
	int i,j,max,min,rev,r,temp,n;
	printf("\n enter the value of min and max:");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		n=i;
		temp=n;
		rev=0;
		while(n!=0)
		{
			r=n%10;
			rev=rev*10+r;
			n=n/10;
		}
		if(rev==temp)
		printf("\n %d",i);
	}
	return 0;
}
