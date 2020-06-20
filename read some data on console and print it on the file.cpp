#include<stdio.h>
int main ()
{
	char c;
	int a,b;
	char str[50];
	FILE *fp;
	fp=fopen("output1.txt","w");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	printf("\n enter the character:");
	scanf("%c",&c);
	printf("\n enter any two number:");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("\n enter any string:");
	gets(str);
	fprintf(fp,"%c %d %d %s",c,a,b,str);
	fclose(fp);
	printf("\n data is copied");
	return 0;
}
