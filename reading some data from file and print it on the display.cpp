#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int a;
	char str[50];
	fp=fopen("input1.txt","r");
		if(fp==NULL)
	{
		printf("\n unable to open");
		return 0;
	}
	fscanf(fp,"%c %d ",&ch,&a);
	fgets(str,50,fp);
	printf("\n details are:");
	printf("\n character = %c",ch);
	printf("\n a=%d",a);
	printf("\n name=%s",str);
	return 0;
}

