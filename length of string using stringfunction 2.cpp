#include<stdio.h>
int main()
{
	char a[20];
	int l;
	printf("\n enter string a:");
	gets(a);
	for(l=0;a[l]!='\0';l++);
	printf("\n length of string is %d",l);
	return 0;
	
}
