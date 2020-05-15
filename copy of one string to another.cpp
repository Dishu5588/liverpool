#include<stdio.h>
int main()
{
	char a[20], b[20];
	int i;
	printf("\n enter string a:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("\n copied string is %s",b);
	return 0;
}
