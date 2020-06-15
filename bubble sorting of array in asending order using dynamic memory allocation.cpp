#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,j,n,temp;
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
		printf("\n array elements are:");
		for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		for(i=1;i<n;i++)              // number of passes = n-1;
		{
			for(j=0;j<n-i;j++)        //number of comparision = n-i
			{
				if(*(a+j)>*(a+(j+1)))
				{
					temp=*(a+j);
					*(a+j)=*(a+(j+1));
					*(a+(j+1))=temp;
				}
			}
		}
		printf("\n sorted array is:");
		for(i=0;i<n;i++)
		{
			printf(" %d",*(a+i));
		}
	}
	free(a);
	return 0;
}
