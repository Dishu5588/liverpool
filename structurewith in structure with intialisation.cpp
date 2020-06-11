#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
		int rollno;
		char name[50];
		struct dob
		{
			int date,month,year;
		}d;
	}s;
	s.rollno=1;
	strcpy(s.name,"deshant kumar");
	s.d.date=17;
	s.d.month=07;
	s.d.year=1995;
	printf(" the student detail is:\n");
	printf("\n rollno=%d\n",s.rollno);
	printf("\n name=%s\n",s.name);
	printf("\n dob=%d %d %d\n",s.d.date,s.d.month,s.d.year);
	return 0;
}
