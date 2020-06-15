#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int rollno;
	char name[20];
	char course [20];
	int fees;
};
int main()
{
	int i;
	struct student *ptr[10];
	for(i=0;i<2;i++)
	{
		ptr[i]=(struct student *)malloc(sizeof(struct student));
		printf("\n enter the student %d details",i+1);
		printf("\n enter the roll number:");
		scanf("%d",&ptr[i]->rollno);
		fflush(stdin);
		printf("\n enter the name :");
		gets(ptr[i]->name);
		printf("\n enter the course name:");
		gets(ptr[i]->course);
		printf("\n enter the fees:");
		scanf("%d",&ptr[i]->fees);
	}
	printf("\n the details of the student are:");
	for(i=0;i<2;i++)
	{
	printf("\n rollno=%d",ptr[i]->rollno);
	printf("\n name=%s",ptr[i]->name);
	printf("\n course=%s",ptr[i]->course);
	printf("\n fees=%d",ptr[i]->fees);
    }
	return 0;
}
