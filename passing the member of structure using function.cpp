#include<stdio.h>
	struct num
	{
		int a,b;
	};
	void swap(int,int);
	int main()
	{
		struct num s;
		s.a=10;
		s.b=20;
		printf("\n before swap a is %d and b is %d",s.a,s.b);
		swap(s.a,s.b);
		printf("\n after swap a is %d and b is %d",s.a,s.b);
		return 0;
	}
	void swap (int a,int b)
	{
		int temp;
		 temp=a;
		 a=b;
		 b=temp;
	}
	

