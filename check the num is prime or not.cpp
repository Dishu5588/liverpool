#include<stdio.h>
int main()
{
	int i,num,f=0;
	printf("\n enter any num:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
		f=1;
		break;
	    }
	}

   if(f==1)
   printf("\n num is not prime");
   else
   printf("\n num is  prime");
}   

