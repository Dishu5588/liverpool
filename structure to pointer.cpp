#include<stdio.h>
struct student 
{
	int rollno;
	char name[50];
	float marks;
};
int main()
{
	struct student s1={ 1,"deshant kumar",590.5};
	struct student *ptr;
	ptr=&s1;
	printf("\n rollno=%d",ptr->rollno);
	printf("\n name=%s",ptr->name);
	printf("\n marks=%f",ptr->marks);
	return 0;
}
