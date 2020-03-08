#include<stdio.h>
int main()
{
	float p,l,b;
	printf("/n enter the length:");
	scanf("%f",&l);
	printf("/n enter the breath:");
	scanf("%f",&b);
	p=2*(l+b);
	printf("the perimeter of rect is %f",p);
	return 0;
}
