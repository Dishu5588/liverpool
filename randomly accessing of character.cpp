#include<stdio.h>
int main()
{
	FILE *fp;
	int result;
	fp=fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	fputs("modern college",fp);
	fseek(fp,8,0);
	fputs("mohri",fp);
	rewind(fp);
	fseek(fp,0,2);
	result=ftell(fp);
	printf("\n total number of character is %d",result);
	fclose(fp);
	return 0;
}
