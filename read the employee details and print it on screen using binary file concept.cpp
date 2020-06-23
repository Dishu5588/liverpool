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
	struct employee e[5];
	int i;
	FILE *fp;
	fp=fopen("employee.txt","wb");
	if(fp==NULL)
	{
		printf("\n unable to open a file");
		return 0;
	}
	printf("\n enter the details of the student:");
	for(i=0;i<2;i++)
	{
		printf("\n enter the code:");
		scanf("%d",&e[i].ecode);
		printf("\n enter the name:");	
		fflush(stdin);
		gets(e[i].ename);
		printf("\n enter the hra da ta :");
		scanf("%d %d %d",&e[i].hra,&e[i].da,&e[i].ta);
		fwrite(&e[i],sizeof(e[i]),1,fp);
	}
	printf("\n data entered into the file");
	fclose(fp);
	return 0;
}
