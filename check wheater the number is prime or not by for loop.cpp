#include<stdio.h>
int main()
{
	int i,num,x=0;
	printf("\n enter any num:");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
		x++;
		break;
	    }
	}
	if(x==0)
	printf("\n it is  a prime number");
	else 
	printf("\n it is not a prime number");
	return 0;
}
