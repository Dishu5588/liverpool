#include<stdio.h>
int main()
{
	char ch;
	FILE *fp1,*fp2;
	fp1=fopen("input1.txt","r");
	if(fp1==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	fp2=fopen("output1.txt","a");
	if(fp2==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	printf("\n data is appended");
	return 0;
}
