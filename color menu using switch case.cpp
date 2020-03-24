#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter color menu");
	printf("\n r for red");
	printf("\n b for blue");
	printf("\n g for green");
	printf("\n enter choice:");
	scanf("%c",&ch);
	switch(ch)
	{
		case'r':printf("\n roses are red ");
		        break;
		case'g':printf("\n trees are green");
		        break;
		case'b':printf("\n sky is blue");
		        break;
		default:printf("\n invalid choice");				        
	}
	return 0;
}
