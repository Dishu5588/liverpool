#include<stdio.h>
int main()
{
	int num,sum1=0,sum2=0,digit,sq,cube;
	printf("\n enter any num:");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		if(digit%2==0)
		{
		sq=digit*digit;
		sum1=sum1+sq;
	    }
		else
		{
		cube=digit*digit*digit;
		sum2=sum2+cube;
	    }
		num=num/10;
	}
	printf("\n sum of the square of odd no is %d",sum2);
	printf("\n sum of the cube of  even no is %d", sum1);
	return 0;
}
