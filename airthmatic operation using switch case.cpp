#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	printf("\n enter any operater:");
	scanf("%c",&ch);
	printf("\n enter 2 nos:");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
		case'+':printf("\n addition=%d",a+b);
		         break;
		case'-':printf("\n subtraction=%d",a-b);
		        break;
		case'*':printf("\n multipication=%d",a*b);
		        break;
		case'/':printf("\n division=%d",a/b);
		        break;
		case'%':printf("\n modular=%d",a%b);
		        break;
	    default:printf("\n wrong choice");				         
	}
	return 0;
}
