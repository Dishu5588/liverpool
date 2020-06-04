#include<stdio.h>
	struct student
	{
		int rollno;
		char name[50];
	};
	int main()
	{
	struct student s;

		printf("\n size of student:%d",sizeof (s));
		return 0;
	}

