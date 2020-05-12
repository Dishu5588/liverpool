#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int i;
	printf("\n enter the string a:");
	gets(a);
	printf("\n enter the string b:");
	gets(b);
	if(strcmp(a,b)==0)
	printf("\n both are equal");
	else
	printf("\n both are unequal");
	return 0;
}
