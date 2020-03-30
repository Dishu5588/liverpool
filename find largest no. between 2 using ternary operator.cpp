#include<stdio.h>
int main()
{
	int a,b,max;
	printf("\n enter 2 nos:");
	scanf("%d,%d",&a,&b);
	max=(a>b)?a:b;
	printf("\n largest no. is %d",max);
	return 0;
}
