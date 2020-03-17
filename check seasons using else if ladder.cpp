#include<stdio.h>
int main()
{
	int m;
	printf("\n enter month(1-12):");
	scanf("%d",&m);
	if(m==12||m==1||m==2)
	printf("\n winter");
	else if (m==3||m==4||m==5)
	printf("\n spring");
	else if (m==6||m==7||m==8)
	printf("\n summer");
	else if (m==9||m==10||m==11)
	printf("\n autumn");
	else
	printf("\n invalid month");
	return 0;
	
}
