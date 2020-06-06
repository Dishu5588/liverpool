#include<stdio.h>
struct student
{
	int rollno;
	float percent;
};
void display(student *);
int main()
{
	struct student s1;
	s1.rollno=1;
	s1.percent=95;
    display(&s1);
	return 0;
}
void display (student *s2)
{
	printf("\n rollno=%d",s2->rollno);
	printf("\n percent=%f",s2->percent);
}
