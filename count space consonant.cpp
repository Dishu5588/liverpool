#include<stdio.h>
int main()
{
	char a[50];
	int i,actr=0,vctr=0,cctr=0,tctr=0,sctr=0,nctr=0;
	printf("\n enter string a: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		{
			actr++;
		if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u')
			vctr++;
		else
		    cctr;
		}
		else if(a[i]>=48&&a[i]<=57)
		nctr++;
		else if(a[i]==' ')
		sctr++;
		else if(a[i]=='\t')
		tctr++;   
	}
	printf("\n total alphabet is %d",actr);
	printf("\n total vowel is %d",vctr);
	printf("\n total consonant is %d",cctr);
	printf("\n total number is %d",nctr);
	printf("\n total space is %d",sctr);
	printf("\n total tab is %d",tctr);
	return 0;
}
