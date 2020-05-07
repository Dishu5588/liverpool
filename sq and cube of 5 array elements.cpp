#include<stdio.h>
int main()
{
	int i,a[10],sq,cube;
	printf("\n enter the 5 nos:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sq=a[i]*a[i];
		cube=a[i]*a[i]*a[i];
	    printf("\n %d,%d,%d",a[i],sq,cube);
	}

	return 0;
}
