#include<stdio.h>
int main()
{
	int i,a[50],n;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter %d nos:",n);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		a[i]=a[i]/2;
		else
		a[i]=a[i]*2;
	}
	printf("\n enter the array elements are:");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}
