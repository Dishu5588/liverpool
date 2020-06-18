#include<stdio.h>
int main()
{

	FILE *fp;
	int nv=0,nd=0;
	char ch;
	fp=fopen("input1.txt","r");
	if(fp==NULL)
	{
		printf("\n unable to open the file");
		return 0;
	} 
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		nv++;
		if(ch>='0'&&ch<='9')
		nd++;
		ch=fgetc(fp);
	}
	printf(" total no of vowels is %d",nv);
	printf("\n total no of digits is %d",nd);
	fclose(fp);
	return 0;
}
