#include<stdio.h>
int main()
{
	int m,y;
	printf("\n enter any month(1-12) and year:");
	scanf("%d%d",&m,&y);
	switch(m)
	{
		case 4:
		case 6:
		case 9:
		case 11: printf("\n no. of days is 30");
		         break;
		case 2: switch(y%4)
		        {
		        case 0:printf("\n no. of days is 29");
		               break;
				default:printf("\n no. of days 28");
			    }
			    break;
		default:printf("\n no. of days 31");
    }
    return 0;
}
