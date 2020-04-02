#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n enter 4 nos:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf("\n a is greater");
	else if(b>c&&b>d&&b>a)
	printf("\n b is greater");
	else if (c>a&&c>b&&c>d)
	printf("\n c is greater");
	else
	printf("\n d is greater");
	return 0;
}
