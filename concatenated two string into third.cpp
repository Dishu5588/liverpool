#include<stdio.h>
int main()
{
	char a[20],b[20],c[40];
	int i,j;
	printf("\n enter string a:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
    printf("\n enter string b:");
    gets(b);
    for(j=0;b[j]!=0;j++)
    {
    	c[i]=b[j];
    	i++;
	}
	c[i]='\0';
	printf("\n concatenated string is %s",c);
	return 0;
}
