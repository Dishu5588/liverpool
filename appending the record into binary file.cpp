#include<stdio.h>
#include<stdlib.h>
struct employee
{
	int ecode;
	char ename[50];
	int hra;
	int da;
	int ta;
};
int main()
{
	struct employee e;
	FILE *fp;
	fp=fopen("employee.txt","ab");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	printf("\n enter the code:");
	scanf("%d",&e.ecode);
	printf("\n enter the name:");
	fflush(stdin);
	gets(e.ename);
	printf("\n enter the hra da ta:");
	scanf("%d %d %d",&e.hra,&e.da,&e.ta);
	fwrite(&e,sizeof(e),1,fp);
	printf("\n record stored sucessfully");
	fclose(fp);
	return 0;
}
