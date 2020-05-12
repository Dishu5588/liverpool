#include<stdio.h>
int main()
{
	char a[10],b[10];
	int i=0;
	printf("\n enter string a:");
	gets(a);
	printf("\n enter string b:");
	gets(b);
	while(a[i]==b[i]&&a[i]!='\0'&&b[i]!='\0')
	{
		i++;
	}
	if(a[i]=='\0'&&b[i]=='\0')
	printf("\n both are equal");
	else
	printf("\n both are unequal");
	return 0;
}
