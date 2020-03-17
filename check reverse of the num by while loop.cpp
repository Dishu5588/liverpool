#include<stdio.h>
int main()
{
	int i,sum=0,num,digit,temp;
	printf("\n enter any num:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	digit=num%10;
	sum=sum*10+digit;
	num=num/10;
    }
    printf("\n reverse of %d is %d",temp,sum);
    return 0;
}
