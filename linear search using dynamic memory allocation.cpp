#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*a,ctr=0,n,num;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("\n no memory is allocated");
		return 0;
	}
	else
	{
		printf("\n enter the array elements:");
		for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		printf("\n enter the number to search:");
		scanf("%d",&num);
		for(i=0;i<n;i++)
		{
		   if(num==*(a+i))
		   {
		   	printf("\n number is at %d index",i);
		   	ctr++;
		   }	
		}
		if(ctr==0)
		printf("\n number does not exist");
		else
		printf("\n number is %d times",ctr);
	}
	free(a);
	return 0;
}
