#include<stdio.h>
#include<dos.h>
struct employee
{
	int ecode;
	char *ename;
	int esal;
};
int main(int argc,char* argv[])
{
	struct employee e;
	e.ecode=atoi(argv[1]);
	e.ename=argv[2];
	e.esal=atoi(argv[3]);
	printf("\n employee code=%d",e.ecode);
	printf("\n employee name=%s",e.ename);
	printf("\n employee salary=%d",e.esal);
	return 0;
}
