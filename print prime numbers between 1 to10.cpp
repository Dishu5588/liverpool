#include<stdio.h>
int main()
{
	int i,num,x=0;
	for(num=2;num<=10;num++)
	{
	   x=0;
	   for(i=2;i<=num/2;i++)
	   {
          if(num%i==0)
          {
          x++;
          break;
          }
	   }
	   if(x==0)
	   printf("%d",num);	
	}
	return 0;
}
