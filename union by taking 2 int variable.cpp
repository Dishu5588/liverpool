#include<stdio.h>
union num
{
	int a,b;
};
int main()
{
    typedef union num no;
    no n;
	n.a=10;
	printf("\n value of b is %d",n.b);
	n.b=20;
	printf("\n the value of a is %d ",n.a);
	return 0;
}
