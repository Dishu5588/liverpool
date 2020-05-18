#include<stdio.h>
int main()
{
	char a[20],temp;
	int i,j,l;
	printf("\n enter string a:");
	gets(a);
	for(l=0;a[l]!='\0';l++);
	j=l-1;
	for(i=0;i<j;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	printf("\n reversed string is %s",a);
	return 0;
	
}
