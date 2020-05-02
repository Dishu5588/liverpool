#include<stdio.h>
int main()
{
	int i,a[4]={2,4,6,8},b[4]={10,12,14,16},c[8],j=0;
	for(i=0;i<4;i++)
	{
		c[i]=a[i];
	}
	for(i=4;i<8;i++)
	{
		c[i]=b[j];
		j++;
	}
	printf("\n concatenation array is:");
	for(i=0;i<8;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
