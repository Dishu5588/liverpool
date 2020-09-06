#include<iostream>
using namespace std;
int max(int x,int y,int z)
{
	if(x>y && x>z)
	return x;
	else if(y>z)
	return y;
	else
	return z;
}
int main()
{
	int a=20,b=56,c=24,res;
	res=max(a,b,c);
	cout<<"maximum of number is "<<res<<endl;
	return 0;
}
