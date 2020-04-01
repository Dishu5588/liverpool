#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter 3 nos:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("\n a is greater");
	else if (b>c&&b>a)
	printf("\n b is greater");
	else
	printf("\n c is greater");
	return 0;
}
