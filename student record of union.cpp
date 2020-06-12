#include<stdio.h>
#include<string.h>
union student
{
	int rollno;
	char name[50];
};
int main()
{
	union student s;
	s.rollno=1;
	printf("\n rollno=%d",s.rollno);
	strcpy(s.name,"deshant kumar");
	printf("\n name =%s",s.name);
	return 0;
}
