#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
	int age;
	char name[20];
	char gender;
	char branch[20];
   };
struct student s1;
s1.age=24;
strcpy(s1.name,"ramu");
strcpy(s1.branch,"computer");
printf("\n age of student is %d",s1.age);
printf("\n name of student is %s",s1.name);
printf("\n branch of a student is %s",s1.branch);
return 0;
}




