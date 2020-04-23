#include<stdio.h>
int main()
{
   int i,a[50],sum=0,n;
   float avg;
   printf("\n enter the value of n:");
   scanf("%d",&n);
   printf("\n enter %d nos:",n);
   for(i=0;i<=n;i++)
   {
   	  scanf("%d",&a[i]);
   	  sum=sum+a[i];
   }
   avg=(float)sum/n;
   printf("avg of %d no. is %f",n,avg);
   return 0;
}
   
