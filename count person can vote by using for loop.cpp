#include<stdio.h>
int main()
{
 int i,age,n,x=0;
 printf("\n enter the value of n:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	printf("\n enter age");
 	scanf("%d",&age);
 	if(age>=18)
 	x++;
 }
 printf("\n total person can vote is %d",x);
 return 0;
}
