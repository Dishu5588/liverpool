#include<stdio.h>
int main()
{
	int i,r,temp,n,sum=0,fact;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		fact=1;
		for(i=r;i>=1;i--)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	printf("\n %d is a strong number",temp);
	else
	printf("\n %d is not a strong number",temp);
	return 0;
}
