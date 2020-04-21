#include<stdio.h>
int main()
{
	float hrd,da,pf,gross,basic,net;
	printf("/n enter the basic salary: ");
	scanf("%f",&basic);
	printf("/n enter hra:");
	scanf("%f",&hrd);
	printf("/n enter the da:");
	scanf("%f",&da);
	printf("/n enter the pf:");
	scanf("%f",&pf);
	gross=basic+hrd+da;
	net=gross-pf;
	printf("/n gross salary is %f",gross );
	printf("/n net salary is %f",net);
	return 0;
	}
