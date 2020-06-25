#include<stdio.h>
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
	fp=fopen("employee.txt","rb");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	}
	printf("\n enter the record number to read:");
	scanf("%d",&rec_no);
	fseek(fp,(rec_no-1)*sizeof(e),0);
	fread(&e,sizeof(e),1,fp);
	printf("\n detail of the employee is:");
	printf("\n employee name =%s",e.ename);
	printf("\n hra=%d da=%d ta=%d",e.hra,e.da,e.ta);
	fclose(fp);
	return 0;
}
