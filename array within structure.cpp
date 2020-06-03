#include<stdio.h>
	struct student 
	{
		int rollno;
		char name[20];
		int m[6],total;
	};
	struct student s[60];
	int main()
	{
		int i,j,n;
		printf ("\n enter the total number of student:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		printf("\n enter the %d student detail",i+1);
		printf("\n enter the roll number:");
		scanf("%d",&s[i].rollno);
		fflush(stdin);
		printf("\n enter the name of the student:");
		gets(s[i].name);
		printf("\n enter the marks:");
		for(j=0;j<6;j++)
		{
			scanf("%d",&s[i].m[j]);
		}
	    }
	    for(i=0;i<n;i++)
	    {
	    	s[i].total=0;
	    	for(j=0;j<6;j++)
	    	{
	    		s[i].total=s[i].total+s[i].m[j];
			}
		}
		printf("\n displaying the details of students");
		for(i=0;i<n;i++)
		{
			printf("\n the detail of %d student",i+1);
			printf("\n name=%s",s[i].name);
			printf("\n rollno=%d",s[i].rollno);
			printf("\n marks=%d",s[i].total);
		}
		return 0;
	}
	
