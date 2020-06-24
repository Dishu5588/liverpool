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
	int rc;
	fp=fopen("employee.txt","rb+");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	while(1)
	{
	fread(&e,sizeof(e),1,fp);
	if(feof(fp))
	break;
	printf("\n the existing record is %d %s %d %d %d",e.ecode,e.ename,e.hra,e.da,e.ta);
	printf("\n enter the code to be modified:");
	scanf("%d",&rc);
	printf("\n enter the modified name:");
	fflush(stdin);
	gets(e.ename);
	printf("\n enter the modified hra da ta:");
	scanf("%d %d %d",&e.hra,&e.da,&e.ta);
	fwrite(&e,sizeof(e),1,fp);
    }
	printf("\n record modified sucessfully");
	fclose(fp);
	return 0;
}
