#include<stdio.h>
int main()
{
	int i,fact=1,j,sum=0;
	for(i=1;i<=5;i++)
	{
		fact=1;
		for(j=i;j>=1;j--)
		{
			if(i%2!=0)
			{
				fact=fact*j;
			}
		}
		sum=sum+fact;
	}
	printf("\n sum of factorial of odd no is %d",sum);
	return 0;
}
