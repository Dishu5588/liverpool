#include<stdio.h>
struct student 
{
	int rollno;
	char name[50];
	float marks;
};
int main()
{
	struct student s1={1,"deshant kumar",590.5};
	struct student s2;
	s2=s1;
	printf("\n rollno=%d",s2.rollno);
	printf("\n name=%s",s2.name);
	printf("\n marks=%f",s2.marks);
	return 0;
}

