#include<stdio.h>
struct student
{
	int rollno;
	float percentage;
};
void display(int,float);
int main()
   {
	struct student s1;
	printf("\n enter the roll number:");
	scanf("%d",&s1.rollno);
	printf("\n enter the percentage:");
	scanf("%f",&s1.percentage);
	display(s1.rollno,s1.percentage);
	return 0;
   }
void display(int a,float b)
{
	printf("\n roll number is %d",a);
	printf("\n percentage is %f",b);
}

