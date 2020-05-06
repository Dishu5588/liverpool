#include<stdio.h>
int main()
{
	int a[4]={1,3,10,12},b[4]={2,4,15,20},c[8];
	int i=0,j=0,k=0,p;
	while(i<4&&j<4)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(i=4)
	{
		for(p=j;p<4;p++)
		{
			c[k]=b[p];
			k++;
		}
	}
	else
	{
		for(p=i;p<4;p++)
		{
			c[k]=a[p];
			k++;
		}
	}
	printf("\n merged array is :");
	for(k=0;k<8;k++)
	{
		printf("%d ",c[k]);
	}
	return 0;
	
}
