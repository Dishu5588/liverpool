#include<iostream>
using namespace std;
int sum (int a,int b)
{
	return a+b;
}
float sum (float a,float b)
{
	return a+b;
}
int sum (int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	 int a=10,b=20,c,d;
	 float i=15.5,j=44.99,k;
	 c=sum(a,b);
	 d=sum(a,b,c);
	 k=sum(i,j);
	 cout<<"sum of two integer number is "<<c<<endl;
	 cout<<"sum of 3 integer number is "<<d<<endl;
	 cout<<"sum of 2 float number is "<<k<<endl;
	 return 0;
}
