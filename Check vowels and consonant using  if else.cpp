#include<stdio.h>
int main()
{
	char alpha;
	printf("\n enter any alphabet:");
	scanf("%c",&alpha);
	if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
	printf("\n vowels");
	else
	printf("\n consonant");
	return 0;
	
}
