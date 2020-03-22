#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any character:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("\n upper case alphabet");
	else if (ch>=97&&ch<=122)
	printf("\n lower case alphabet");
	else if (ch>=48&&ch<=57)
	printf("\n numbers");
	else
	printf("\n special character");
	return 0;
}
