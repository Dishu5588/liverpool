#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},i;
	int *ptr=a;
	printf("\n entered numbers are:");
	for(i=0;i<5;i++)
	{
		printf(" %d",*(ptr+i));
	}
	return 0;
}
