#include<stdio.h>
int main()
{
	char a[50],temp;
	int i=0,l=0,j;
	printf("\n enter string a:");
	gets(a);
	while(a[l]!='\0')
	{
		l++;
	}
	j=l-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("\n the reversed string is %s",a);
	return 0;
}
