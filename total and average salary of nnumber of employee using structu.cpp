#include<stdio.h>
int main()
{
	struct student
	{
		int eno;
		float sal;
		char name[30];
	};
	struct student e[60];
	int i,n;
	float total=0,avg;
	printf("\n enter the number of employees:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter employee %d detail",i+1);
		printf("\n enter the employee number:");
		scanf("%d",&e[i].eno);
		fflush(stdin);
		printf("\n enter the name of employee:");
		gets(e[i].name);
		printf("\n enter the salary of the employee:");
		scanf("%f",&e[i].sal);
	}
	for(i=0;i<n;i++)
	{
		total=total+e[i].sal;
		avg=total/n;
	}
	for(i=0;i<n;i++)
	{
		printf("\n employee %d detail",i+1);
		printf("\n employee number is %d",e[i].eno);
		printf("\n employee name is %s",e[i].name);
		printf("\n employee salary is %f",e[i].sal);
	}
	printf("\n total salary of %d employee is %f",n,total);
	printf("\n average salary of %d employee is %f",n,avg);
	return 0;
	
}
