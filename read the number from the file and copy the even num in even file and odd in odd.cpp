#include<stdio.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	int n;
	fp1=fopen("input1.txt","r");
	if(fp1==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	fp2=fopen("even.txt","w");
	if(fp2==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	fp3=fopen("odd.txt","w");
	if(fp3==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	n=getw(fp1);
	while(n!=EOF)
	{
		if(n%2==0)
		putw(n,fp2);
		if(n%2==1)
		putw(n,fp3);
		n=getw(fp1);
	}
	printf(" file copied");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
