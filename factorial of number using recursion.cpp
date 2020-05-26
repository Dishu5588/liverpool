#include<stdio.h>
int fact(int);
int main()
{
	int num,res;
	printf("\n enter any number :");
	scanf("%d",&num);
	res=fact(num);
	printf("\n %d factorial is %d",num,res);
	return 0;
}
int fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}

