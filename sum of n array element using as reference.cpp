#include<stdio.h>
int sumarr(int*,int);
int main()
{
	int a[10],n,i,sum;
	int *ptr=a;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter %d nos:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	sum=sumarr(a,n);
	printf("\n sum of array element is %d",sum);
	return 0;
}
	int sumarr(int *x,int n)
	{
		int i,sum=0;
		for(i=0;i<n;i++)
		{
			sum=sum+*(x+i);
		}
		return sum;
		
	}

