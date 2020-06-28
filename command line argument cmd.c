#include<stdio.h>
int main(int argc,char*argv[])
{
	int i;
	if(argc==1)
	{
		printf("\n no argument is passed");
	}
	else
	{
		for(i=1;i<argc;i++)
		{
			printf("\n argument value=%s",argv[i]);
		}
	}
	return 0;
}
