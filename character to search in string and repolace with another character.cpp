#include<stdio.h>
int main()
{
	char a[20],ch,rep;
	int i;
	printf("\n enter string a:");
	gets(a);
	printf("\n enter the character to search: ");
	fflush(stdin);
	scanf("%c",&ch);
	printf("\n enter the character to replace with: ");
	fflush(stdin);
    scanf("%c",&rep);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==ch)
		{
			a[i]=rep;
		}
	}
	printf("\n replaced string is %s",a);
	return 0;
	
}
