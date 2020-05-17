#include<stdio.h>
int main()
{
	char a[50];
	int i,l=0;
	printf("\n enter the string a:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	l++;
	for(i=l-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
