#include<stdio.h>
int main()
{
	float basic,bonus,totalsalary;
	printf("\n enter basic salary: ");
	scanf("%f",&basic);
	if(basic>5000)
	bonus=0.50*basic;
	else
	bonus=0.25*basic;
	totalsalary=basic+bonus;
	printf("\n total salary is %f",totalsalary);
	return 0;
}
