#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
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
	char ch[50];
	int a;
	fscanf(fp1," %d %s",&a,&ch);
	fprintf(fp2," %d %s",a,ch);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
