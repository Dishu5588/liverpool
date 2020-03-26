 #include<stdio.h>
 int main()
 {
 	int i,n,num,x=0,y=0;
 	printf("\n enter the value of n:");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		printf("\n enter any number:");
 		scanf("%d",&num);
 		if(num%2==0)
 		x++;
 		else
 		y++;
 	}
 	printf("\n total even no. is %d",x);
 	printf("\n total odd no. is %d",y);
 	return 0;
	 
 }
