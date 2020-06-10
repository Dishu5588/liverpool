#include<stdio.h>
union student
{
	int rollno;
	char name[50];
};
int main()
{
	typedef union student stud;
	stud s;
	printf("\n size of union is %d",sizeof(s));
	return 0;
}
