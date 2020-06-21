#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("poem.txt","w");
	if(fp==NULL)
	{
		printf("\n unable to open");
		return 0;
	}
	ch=getchar();
	while(ch!=EOF)
	{
		fputc(ch,fp);
		ch=getchar();
	}
	fclose(fp);
	return 0;
}
