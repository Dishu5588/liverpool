#include<stdio.h>
int main()
{
	int i,a[50],n,num,ctr=0;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the %d nos:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the no to search :");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("\n number is at %d index",i);
			ctr++;
		}
	}
	if(ctr==0)
	printf("\n number does not exists");
	else
	printf("\n number is %d times",ctr);
	return 0;
}
