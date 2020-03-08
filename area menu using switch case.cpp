#include<stdio.h>
int main()
{
	float l,b,ar,ac,r;
	char ch;
	printf("\n enter area menu");
	printf("\n 1 for area of rectangle");
	printf("\n 2 for area of circle");
	printf("\n enter choice:");
	scanf("%c",&ch);
	switch(ch)
	{
		case'1': printf("\n enter length and breath:");
		         scanf("%f%f",&l,&b);
		         ar=l*b;
		         printf("\n area of rectangle is %f",ar);
		         break;
		case'2': printf("\n enter the radius:");
		         scanf("%f",&r);
				 ac=3.14*r*r;
				 printf("\n area of circle is %f",ac);
				 break;
		default:printf("\n enter invalid choice");		        
	}
	return 0;
}
