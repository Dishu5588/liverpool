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
	int rec_no;
	fp=fopen("employee.txt","rb+");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	printf("\n enter the record number to be edit:");
	scanf("%d",&rec_no);
	fseek(fp,(rec_no-1)*sizeof(e),0);
	printf("\n enter the modified details:");
	printf("\n enter the modified name:");
	fflush(stdin);
	gets(e.ename);
	printf("\n enter the modified hra da ta:");
	scanf("%d %d %d",&e.hra,&e.da,&e.ta);
	fwrite(&e,sizeof(e),1,fp);
	printf("\n data is modified");
	fclose(fp);
	return 0;
}
