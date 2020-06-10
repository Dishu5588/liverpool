#include<stdio.h>
struct employee
{
	int ecode;
	char ename[50];
	float esal;
};
typedef struct employee emp;
emp getdata();
void putdata (emp);
emp increment (emp);
int main()
{
	emp a,b;
	a=getdata();
	putdata(a);
	b=increment(a);
	putdata (b);
	return 0;
}
emp getdata()
{
	emp x;
	printf("\n enter the employee code:");
	scanf("%d",&x.ecode);
	fflush(stdin);
	printf("\n enter the employee name: ");
	gets(x.ename);
	printf("\n enter the employee salary:");
	scanf("%f",&x.esal);
	return x;
}
void putdata(emp y)
{
	printf("\n employee code=%d",y.ecode);
	printf("\n employee name=%s",y.ename);
	printf("\n employee salary is %f",y.esal);
}
emp increment (emp z)
{
    z.esal=z.esal+10000;
	return z;	
}
