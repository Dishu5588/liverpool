#include<stdio.h>
int main()
{
	int n,i,count,j;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				count++;
			}
			if(count==2)
			printf("\n %d is a prime factor",i);
		}
	}
	return 0;
}
