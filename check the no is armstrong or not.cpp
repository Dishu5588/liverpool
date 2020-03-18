#include<stdio.h>
int main()
{
	int i,num,sum=0,temp,digit;
	printf("\n enter any num:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum+(digit*digit*digit);
		num=num/10;
	}
	if(sum==temp)
	printf("\n it is armstrong no");
	else
	printf("\n it is not a armstrong no");
	return 0;
}
