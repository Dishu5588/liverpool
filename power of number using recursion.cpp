#include<stdio.h>
int power(int,int);
int main()
{
	int b,e,res;
	printf("\n enter the base and exponent :");
	scanf("%d%d",&b,&e);
	res=power(b,e);
	printf("\n power is %d",res);
	return 0;
}
int power(int x,int y)
{
	if(y>=1)
	return x*power(x,y-1);
	else
	return 1;
}
