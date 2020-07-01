#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char str[50];
	fp1=fopen("input.txt","r");
	if(fp1==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	fp2=fopen("output.txt","w");
	if(fp2==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	fgets(str,50,fp1);
	fputs(str,fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
