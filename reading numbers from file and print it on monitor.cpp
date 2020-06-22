#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	int n;
	fp=fopen("input.txt","r");
	fp1=fopen("output1.txt","w");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	if(fp1==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	n=getw(fp);
    while(n!=EOF)
    {
    	putw(n,fp1);
    	n=getw(fp);
	}
	fclose(fp);
	fclose(fp1);
	return 0;
}
