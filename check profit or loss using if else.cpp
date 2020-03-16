#include<stdio.h>
int main()
{
	int sp,cp,profit,loss;
	printf("\n enter cost price and selling price:");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		profit=sp-cp;
		printf("\n profit is %d",profit);
	}
	else
	{
		loss=cp-sp;
		printf("\n loss is %d",loss);
	}
	return 0;
}
