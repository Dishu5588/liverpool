#include<stdio.h>
int main()
{
	struct student
	{
		int rollno;
		char name[20];
		float height;
	};
	struct student s[3];
	int i;
	float avg,sum=0;
	printf("\n enter the detail of 3 students:");
	for(i=0;i<3;i++)
	{
	    printf("\n enter the roll no:");
	    scanf("%d",&s[i].rollno);
	    printf("\n enter the name :");
	    fflush(stdin);
	    gets(s[i].name);
	    printf("\n enter the height :");
	    scanf("%f",&s[i].height);
		sum=sum+s[i].height;
	}
	printf("\n detail of the students are ");
	for(i=0;i<3;i++)
	{
		printf("\n roll no is %d",s[i].rollno);
		printf("\n name is %s",s[i].name);
		printf("\n height is %f",s[i].height);
	}
	avg=sum/3;
	printf("\n average height of 3 student  is %f",avg);
	return 0;
}
