#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*a,n,max,min;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("\n no memory is allocated");
		return 0;
	}
	else
	{
	for(i=0;i<n;i++)
	{
	   scanf("%d",a+i);	
	}
	max=*(a+0);
	min=*(a+0);
    for(i=1;i<n;i++)
	{
		if(*(a+i)>max)
		max=*(a+i);
		if(*(a+i)<min)
		min=*(a+i);
    }
    printf("\n maximum is %d",max);
    printf("\n minimum is %d",min);
    }
    free (a);
    return 0;
}
