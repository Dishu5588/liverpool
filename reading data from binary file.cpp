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
	int i;
	FILE *fp;
	fp=fopen("employee.txt","rb");
	if(fp==NULL)
	{
		printf("\n unable to open a file");
		return 0;
	}
	printf("\n the detail of the students are:");
	while(1)
	{
		
		fread(&e,sizeof(e),1,fp);
		if(feof(fp))
		break;
		printf("\n code=%d",e.ecode);
		printf("\n name=%s",e.ename);
		printf("\n hra=%d da=%d ta=%d",e.hra,e.da,e.ta);
	}
	printf("\n data entered into the file");
	fclose(fp);
	return 0;
}
