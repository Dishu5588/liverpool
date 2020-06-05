#include<stdio.h>
struct date
{
	int date,month,year;
};
int main()
{
	struct date s1={17,07,1995};
	struct date s2={16,07,1995};
	if((s1.date==s2.date)&&(s1.month==s2.month)&&(s1.year==s2.year))
	{
		printf("\n both the dates are equal");
	}
	else 
	printf("\n dates are not equal");
	return 0;
}

