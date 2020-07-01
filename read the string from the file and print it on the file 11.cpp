#include<stdio.h>
int main()
{
	FILE *fp;
	char str[50];
	fp=fopen("output.txt","w");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	printf(" \n enter any string:");
	gets(str);
	fputs(str,fp);
	fclose(fp);
	return 0;
}
