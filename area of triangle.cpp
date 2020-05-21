#include<stdio.h>
void calculate_area(float *,float*);
int main()
{
	float b,h;
	printf("\n enter base and height:");
	scanf("%f %f",&b,&h);
	calculate_area(&b,&h);
	return 0;
}
void calculate_area(float*x,float*y)
{
	float a;
	a=0.5*(*x)*(*y);
	printf("\n area of triangle is %f",a);
}
