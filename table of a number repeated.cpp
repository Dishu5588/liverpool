#include<stdio.h>
int main()
{
	int i,n,prod;
	printf("\n enter eny no:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		prod=n*i;
		printf("\n %d*%d=%d",n,i,prod);

	}
	return 0;
}
