#include<stdio.h>
int main()
{
	int a[50],i,x=0,y=0,n;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the %d nos:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		x++;
		else
		y++;
	}
	printf("\n total even nos is %d",x);
	printf("\n total odd nos is %d",y);
	return 0;
}
