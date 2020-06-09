#include<stdio.h>
#include<string.h>
union student
{
	int rollno;
	char name[50];
};
int main()
{
	typedef union student stud;
	stud s;
	s.rollno=1;
	strcpy(s.name,"deshant kumar");
	printf("\n rollno=%d",s.rollno);
	printf("\n name=%s",s.name);
	return 0;
}
