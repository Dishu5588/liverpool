#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int rollno;
	char name[50];
};
void display (student *);
int main()
{
	struct student *ptr;
	ptr=(struct student *)malloc(sizeof(struct student));
	printf("\n enter the details of student:");
	printf("\n enter the roll number:");
	scanf("%d",&ptr->rollno);
	fflush(stdin);
	printf("\n enter the name:");
	gets(ptr->name);
	display(ptr);
	return 0;
}
void display (student *ptr)
{
printf("\n the details of the student:");
printf("\n rollno=%d",ptr->rollno);
printf("\n name=%s",ptr->name);
}
