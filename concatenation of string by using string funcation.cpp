#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int i;
	printf("\n enter string a:");
	gets(a);
	printf("\n enter string b:");
	gets(b);
	strcat(a,b);
	printf("\n concatenated string is %s",a);
	return 0;
}
