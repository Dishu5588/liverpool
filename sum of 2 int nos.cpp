#include<stdio.h>
void sum (int*,int*);
int main()
{
	int a,b;
	printf("\n enter 2 nos:");
	scanf("%d %d",&a,&b);
	sum(&a,&b);
	return 0;
}
void sum(int*x,int*y)
{
	int z;
	z= *x+*y;
	printf("\n sum is %d",z);
}
