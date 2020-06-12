#include<stdio.h>
struct num
{
	int a,b;
};
void swap (num);
int main()
{
	struct num s1;
	s1.a=10;
	s1.b=20;
	printf("\n before swap a is %d and b is %d", s1.a,s1.b);
	swap(s1);
	printf("\n after swap a is %d and b is %d",s1.a,s1.b);
	return 0;
}
void swap(num s2)
{
	int temp;
	temp =s2.a;
	s2.a=s2.b;
	s2.b=temp;
}
