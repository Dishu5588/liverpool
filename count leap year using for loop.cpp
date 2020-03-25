#include<stdio.h>
int main()
{
	int i,x=0;
	for(i=2000;i<=2020;i++)
	{
	   if(i%4==0)
	   x++;	
	}
	printf("\n total leap is %d ",x);
	return 0;
}
