#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("\n enter string a:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
		a[i]=a[i]+32;
	    }
	}
	printf("\n lower case string is %s",a);
	return 0;
}
