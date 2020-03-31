#include<stdio.h>
int main()
{
	int age;
	char sex,mstatus;
	printf("\n enter age:");
	scanf("%d",&age);
	printf("\n enter mstatus m for married and u for unmarried:");
	fflush(stdin);
	scanf("%c",&mstatus);
	printf("\n enter sex m for male and f for female");
	fflush(stdin);
	scanf("%c",&sex);
	if(mstatus=='m')
	printf("\n can be insured");
	else
	{
		if(sex=='m')
		{
			
			if(age>25)
			printf("\n can be insured");
			else
			printf("\n cannot be insured");
		}
	   else
     	{
	        if(age>35)
        	printf("\n can be insured");
           	else
         	printf("\n cannot be insured");
        }
    }        
	return 0;
    }
	

