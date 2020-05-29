#include<stdio.h>
int gcd(int ,int);
int main()
{
	int a,b,res;
	printf("\n enter the 2 nos:");
	scanf("%d%d",&a,&b);
	res=gcd(a,b);
	printf("\n gcd of %d and %d is %d",a,b,res);
	return 0;
}
int gcd(int a,int b)
{
	if(a==0)
	return b;
	else if(b==0)
	return a;
	else
    gcd(b,a%b);
}
