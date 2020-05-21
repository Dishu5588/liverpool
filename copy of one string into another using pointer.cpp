#include<stdio.h>
int main()
{
	char a[10],b[10];
	char *ptr=a,*pcopy=b;
	int i;
	printf("\n enter the string a:");
	gets(ptr);
	for(i=0;*(ptr+i)!='\0';i++)
	{
		*(pcopy+i)=*(ptr+i);
	}
	*(pcopy+i)='\0';
	printf("\n copied string is %s",b);
	return 0;
}
