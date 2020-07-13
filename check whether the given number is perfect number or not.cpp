#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	printf("\n %d is perfect number",n);
	else
	printf("\n %d not a perfect number",n);
	return 0;
}
