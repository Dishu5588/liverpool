#include<stdio.h>
int main()
{
	float a,b,c,per;
	printf("\n enter marks of 3 subjects:");
	scanf("%f%f%f",&a,&b,&c);
	per=(a+b+c)/3; 
	if(per>=75)
	printf("\n distinction");
	else if(per>=60 && per<75)
	printf("\n first division");
	else if(per>=50 && per,60)
	printf("\n second division");
	else
	printf("\n fail");
	return 0;
	
	 
}
