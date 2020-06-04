#include<stdio.h>
	struct student
	{
		int rollno;
		char name[50];
		struct dob
		{
			int date,month,year;
		}d;
	}s;
	int main()
	{
	printf(" enter the details of student:\n");
	printf("\n enter the roll number:");
	scanf("%d",&s.rollno);
	fflush(stdin);
	printf("\n enter the name:");
    gets(s.name);
	printf("\n enter the dob:");
	scanf("%d %d %d",&s.d.date,&s.d.month,&s.d.year);
	printf("\n the details of the student:");
	printf("\n rollno=%d",s.rollno);
	printf("\n name=%s",s.name);
	printf("\n date of birth is %d %d %d",s.d.date,s.d.month,s.d.year);
	return 0;
    }
