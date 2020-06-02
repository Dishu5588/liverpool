#include<stdio.h>
int main()
{
	struct student
	{
		int rollno;
		char name[20];
		int m1,m2,m3,total;
		float avg;
	};
	struct student s1;
	printf("\n enter the roll no of a student:");
	scanf("%d",&s1.rollno);
	fflush(stdin);
	printf("\n enter the name of the student:");
	gets(s1.name);
	printf("\n enter m1,m2,m3:");
	scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
	s1.total=s1.m1+s1.m2+s1.m3;
	s1.avg=(float)s1.total/3;
	printf("\n roll no is %d",s1.rollno);
	printf("\n name is %s",s1.name);
	printf("\n m1=%d m2=%d m3=%d total=%d avg=%f",s1.m1,s1.m2,s1.m3,s1.total,s1.avg);
	return 0;
}
