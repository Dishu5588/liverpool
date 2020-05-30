#include<stdio.h>
int sumdigit(int);
int main()
{
	int num,res;
	printf("\n enter any number:");
	scanf("%d",&num);
	res=sumdigit(num);
	printf("\n sum of %d is %d",num,res);
	return 0;
}
int sumdigit(int n)
{
	if(n>=1)
	return n%10+sumdigit(n/10);
	else
	return 0;
}
