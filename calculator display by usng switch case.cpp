#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("\n enter 2 nos:");
	scanf("%d%d",&a,&b);
	printf("\n  calculator");
	printf("\n + for addition");
	printf("\n - for subtraction");
	printf("\n / for divide");
	printf("\n * for mul");
	printf("\n enter choice:");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case'+':c=a+b;
		        printf("\n sum is %d",c);
		        break;
		case'-':c=a-b;
		        printf("\n difference is %d",c);
		        break;
		case'*':c=a*b;
		        printf("\n mul is %d",c);
		        break;
		case'/':c=a/b;
		        printf("\n division is %d",c);
		        break;
		default:printf("\n invalid choice");		        
			   		        
	}
	return 0;
}
