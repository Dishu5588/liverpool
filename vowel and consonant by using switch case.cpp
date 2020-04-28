#include<stdio.h>
int main()
{
  char alpha;
  printf("\n enter any alphabet:");
  scanf("%c",&alpha);
  switch(alpha)
      {
  	    case'a':
  	    case'e':
		case'i':
		case'o':
		case'u':printf("\n vowels");
		  	    break;
		default:printf("\n consonant");  	    
	  }	
	  return 0;
}
