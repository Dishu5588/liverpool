#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("\n enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("\n roots are real and equal");
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("\n root1=%f and root=%f",r1,r2);
	}
	else if(d>0)
	{
		printf("\n roots are real and unequal");
		r1=-b+sqrt(d)/(2*a);
		r2=-b-sqrt(d)/(2*a);
		printf("\n root1=%f and root2=%f",r1,r2);
	}
	else
	printf("\n roots are real and imaginary");
	return 0;
}
