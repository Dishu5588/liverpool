#include<stdio.h>
int main()
{
	int a[5]={2,4,6,8,10},b[5]={12,14,16,18,20},i,c[5];
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\n copied array is:");
	for(i=0;i<5;i++)
	    {
		  printf("%d ",c[i]);
		}	
    return 0;
}
