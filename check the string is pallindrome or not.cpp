#include<stdio.h>
int main()
{
	char a[20]={"madam"};
	int i,l,j;
	for(l=0;a[l]!='\0';l++);
	j=l-1;
	for(i=0;i<l/2;i++)
	{
		if(a[i]!=a[j])
		{
			printf("\n not a pallindrome");
			return 0;
		}
		j--;
	}
	printf("\n string is pallidrome");
	return 0;
}                                                                 
