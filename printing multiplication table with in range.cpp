#include<stdio.h>
int main()
{
	int i,j,max,min;
	printf("\n enter the value of min and max:");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n %d*%d=%d",i,j,i*j);
		}
		printf("\n-------------------");
	}
	return 0;
}
