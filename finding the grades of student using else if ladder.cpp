#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float avg;
	total=m1+m2+m3+m4+m5;
	avg=(float)total/5;
	printf("\n enter the marks of 5 subject:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	if(avg>90)
	printf("\n A grade");				
	else{
		 if(avg>70&&avg<=90)
		 printf("\n B grade");
		 else {
               if(avg>60&&avg<=70)
			   printf("\n C grade");
			   else{
			   	    if(avg>50&&avg<=60)
			   	    printf("\n D grade");
			   	    else{
			   	    	if(avg<50)
			   	    	printf("\n E grade");
					   }
			       }		 	
		      }
	    }
	    return 0;
}
