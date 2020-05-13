#include<stdio.h>
int main()
{
	char a[50],b[50];
	int i,j,length=0;
	printf("\n enter string a:");
	gets(a);
	printf("\n enter string b:");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	length++;
	for(i=length,j=0;b[j]!=0;i++,j++)
	{
		a[i]=b[j];
	}
	a[i]='\0';
	printf("\n concatenated string is %s",a);
	return 0;
}
