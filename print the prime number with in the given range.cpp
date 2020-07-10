#include<stdio.h>
int main()
{
	int min,max,i,j,count;
	printf("\n enter the value of min and max:");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("\n %d is the prime number",i);
	}
	return 0;
}
