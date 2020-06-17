#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*a,n,sum=0;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("\n no memory is allocate");
		return 0;
	}
	else
	{
	printf("\n enter %d nos:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		sum=sum+*(a+i); 
	}
	printf("\n sum of array elements is %d:",sum);
	free(a);
    }
	return 0;
}
