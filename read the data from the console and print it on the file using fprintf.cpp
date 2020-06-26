#include<stdio.h>
int main()
{
	FILE *fp;
	int a,b;
	char str[50];
	char ch;
	fp=fopen("output.txt","w");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	printf("\n enter the numbers :");
	scanf("%d %d",&a,&b);
    fflush(stdin);
	printf("\n enter the character:");
	scanf("%c",&ch);
    fflush(stdin);
	printf("\n enter the string :");
	gets(str);
	fprintf(fp,"%d %d %c %s",a,b,ch,str);
	fclose(fp);
	return 0;
}
