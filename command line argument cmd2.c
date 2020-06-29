#include<stdio.h>
#include<dos.h>
int main( int argc,char*argv[])
{
	if(argc>2)
	{
		char*s1=argv[1];
		char*s2=argv[2];
		int x=atoi(s1);
		int y=atoi(s2);
		printf("\n sum is %d",x+y);
	}
	else
	{
		printf("\n unsufficient input values");
	}
	return 0;
}
