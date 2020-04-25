#include<stdio.h>
int main()
{
	int i,num,sum=0,digit,temp;
	printf("\n enter any number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	digit=num%10;
	sum=sum+digit;
	num=num/10;
    }
    printf("\n sum of the digit of %d is %d",temp,sum);
    return 0;
	
}
