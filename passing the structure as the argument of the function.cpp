#include<stdio.h>
#include<string.h>
	struct student
	{
		int rollno;
		char name[50];
	};
	void display (student);
	int main()
	{
		struct student s1;
		s1.rollno=1;
		strcpy(s1.name,"deshant kumar");
		display(s1);
		return 0;
	}
	void display (student s2)
	{
		printf("\n rollno=%d",s2.rollno);
		printf("\n name=%s",s2.name);
	}

