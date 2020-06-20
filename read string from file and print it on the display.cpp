#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("input1.txt","r");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	char str[50];
	fgets(str,50,fp);
	printf("\n string=%s",str);
	return 0;
}
