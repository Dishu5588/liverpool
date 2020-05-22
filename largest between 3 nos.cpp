#include<stdio.h>
int greater(int*,int*,int*);
int main()
{
	int a,b,c,large;
	printf("\n enter 3 nos:");
	scanf("%d %d %d",&a,&b,&c);
	large=greater(&a,&b,&c);
	printf("\n large num is %d",large);
	return 0;
}
	int greater (int*x,int*y,int*z)
	{
		if(*x>*y&&*x>*z)
		return *x;
		else if (*y>*x&&*y>*z)
		return *y;
		else
		return *z;
	}

