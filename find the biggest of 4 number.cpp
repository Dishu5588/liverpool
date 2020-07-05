#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n enter 4 number:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf("\n A is greater");
	if(b>a&&b>c&&b>d)
	printf("\n b is greater");
	if(c>a&&c>b&&c>d)
	printf("\n c is greater");
	if(d>a&&d>b&&d>c)
	printf("\n d is greater");
	return 0;
}
