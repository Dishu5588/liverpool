#include<stdio.h>
int main()
{
	char op;
	int n1,n2;
	printf("\n enter an operation:");
	scanf("%c",&op);
	printf("\n enter 2 nos:");
	scanf("%d %d",&n1,&n2);
	if(op=='+')
	printf("\n addition=%d",n1+n2);
	else if(op=='-')
	printf("\n subtraction=%d",n1-n2);
	else if(op=='*')
	printf("\n multiplication=%d",n1*n2);
	else if(op=='/')
	printf("\n division=%d",n1/n2);
	else if(op=='%')
	printf("\n modular=%d",n1%n2);
	return 0;
}
