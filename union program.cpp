#include<stdio.h>
#include<string.h>
union student
{
	int rollno;
	char name[50];
};
int main()
{
	union student s1;
	s1.rollno=1;
	strcpy(s1.name,"deshant kumar");
	printf("\n roll number =%d",s1.rollno);
	printf("\n name=%s",s1.name);
	return 0;
}
