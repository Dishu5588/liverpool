#include<stdio.h>
int main()
{
	int i,a[6]={10,20,30,40,50,60},n=6,j=n-1,temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	printf("\n reversed array is:");
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
