#include<stdio.h>
int main()
{
	int year;
	printf("\n enter any year:");
	scanf("%d",&year);
	if(year%4==0)
	printf("\n year is leap");
	else
	printf("\n year is not leap");
	return 0;
}
