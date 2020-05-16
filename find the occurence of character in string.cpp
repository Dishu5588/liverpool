#include<stdio.h>
int main()
{
	char a[20],ch;
	int i,ctr=0;
	printf("\n enter the string a:");
	gets(a);
	printf("\n enter the character to search:");
	scanf("%c",&ch);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==ch)
		{
		ctr++;
		printf("\n character is at %d index",i);
	    }
	}
	if(ctr==0)
	printf("\n character does not exists");
	else
	printf("\n character is %d times",ctr);
	return 0;
}
