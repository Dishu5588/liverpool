#include<iostream>
using namespace std;
float add(float a,float b)
{
	float c;
	c=a+b;
	return c;
 } 
 int main()
 {
 	float  x=10.8,y=25.8,z;
 	z=add(x,y);
 	cout<<"addition of "<<x<<" and "<<y<<" is "<<z;
 	return 0;
 }
