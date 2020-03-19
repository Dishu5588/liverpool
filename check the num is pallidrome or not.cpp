#include<stdio.h>
int main()
{
	int i,num,sum=0,temp,digit;
	printf("\n enter any num:");n
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum*10+digit;
		num=num/10;
	}
	if(sum==temp)
	printf("\n it is a pallindrome");
	else
	printf("\n it is not a pallindrome");
	return 0;
}
