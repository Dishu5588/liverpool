#include<stdio.h>
#include<string.h>
union student
{
	int rollno;
	char name[50];
	float marks;
};
int main()
{
	union student s;
	s.rollno=1;
	printf("\n roll number is %d",s.rollno);
	strcpy(s.name,"deshant kumar");
	printf("\n name=%s",s.name);
	s.marks=590.5;
	printf("\n marks=%f",s.marks);
	return 0;
}
