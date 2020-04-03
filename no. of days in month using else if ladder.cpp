#include<stdio.h>
int main()
{
	int m,y;
	printf("\n enter month (1-12):");
	scanf("%d",&m);
	printf("\n enter year:");
	scanf("%d",&y);
	if(m==4||m==6||m==9||m==11)
	printf("\n no. of days 30");
	else if (m==2 && y%4==0)
	printf("\n no. of days 29");
	else if (m==2 && y%4!=0)
	printf("\n no. of days 28");
	else
	printf("\n no. of days 31");
	return 0;
	
}
