#include<stdio.h>
int main()
{
	char a[10],b[10];
	char *ptr=a,*pcopy=b;
	int i=0,m,n;
	printf("\n enter the string a:");
	gets(a);
	printf("\n enter the position to which start:");
	scanf("%d",&m);
	printf("\n enter the number to copy: ");
	scanf("%d",&n);
	ptr=ptr+m;
	while(*(ptr+i)!='\0'&&i<n)
	{
		*(pcopy+i)=*(ptr+i);
		i++;
	}
	*(pcopy+i)='\0';
	printf("\n resultant string is %s",b);
	return 0;
}
