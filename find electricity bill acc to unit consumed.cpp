#include<stdio.h>
int main()
{
	int custno;
	float units,charges;
	printf("\n enter the customer number:");
	scanf("%d",&custno);
	printf("\n enter the unit consume:");
	scanf("%f",&units);
	if(units>0&&units<=200)
	charges=0.50*units;
	else if(units>=201&&units<=400)
	charges=100+0.65*(units-200);
	else if(units>=401&&units<=600)
	charges=230+0.80*(units-400);
	else
	charges=390+1.50*(units-600);
	printf("\n amount to paid=%f",charges);
	return 0;
}
