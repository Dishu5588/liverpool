#include<stdio.h>
int main()
{
	int i=0,a[3]={10,20,30},b[3];
	while(i<3)
	{
		b[i]=a[i];
		i++;
	}
	printf("\n copied array is :");
	for(i=0;i<3;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
