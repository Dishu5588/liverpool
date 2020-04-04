#include<stdio.h>
int main()
{
	int nr,pr,uc;
	float bill,rpu;
	char mtype;
	printf("\n enter privious reading:");
	scanf("%d",&pr); 
	printf("\n enter new reading:");
	scanf("%d",&nr);
	uc=nr-pr;
	printf("\n unit consumed is %d",uc);
    printf("\n enter meter type d or c:");
    fflush(stdin);
	scanf("%c",&mtype);
	if(mtype=='d')
	rpu=4.25;
	else
	rpu=4.75;
	bill=uc*rpu;
	printf("\n bill is %f",bill);
	return 0;
}
