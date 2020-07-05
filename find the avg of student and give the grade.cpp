#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float avg;
	printf("\n enter the marks of 5 subjects:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	avg=(float)total/5;
	if(avg>90)
	printf("\n A grade");
	else if(avg>70&&avg<=90)
	printf("\n B grade");
	else if(avg>60&&avg<=70)
	printf("\n C grade");
	else if(avg>50&&avg<=60)
	printf("\n D grade");
	else if(avg>40&&avg<=50)
	printf("\n E grade");
	else
	printf("\n F grade");
	return 0;
}
