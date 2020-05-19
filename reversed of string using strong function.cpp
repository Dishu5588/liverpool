#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("\n enter the string a:");
	gets(a);
	strrev(a);
	printf("\n reversed string is %s",a);
	return 0;
}
