#include<stdio.h>
int main()
{
	char ch;
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("input1.txt","r");
	if(fp1==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	fp2=fopen("input2.txt","r");
	if(fp2==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	fp3=fopen("output1.txt","w");
	if(fp3==NULL)
	{
		printf("\n unable to open a file");
	    return 0;
	}
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp3);
		ch=fgetc(fp1);
	}
	fclose(fp1);
	ch=fgetc(fp2);
	while(ch!=EOF)
	{
		fputc(ch,fp3);
		ch=fgetc(fp2);
	}
	fclose(fp2);
	fclose(fp3);
	printf("\n text is merged");
	return 0;
}
