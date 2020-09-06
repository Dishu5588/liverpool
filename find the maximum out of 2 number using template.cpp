#include<iostream>
using namespace std;
template<class T>
T max(T x,T y)
{
	if(x>y)
	return x;
	else 
	return y;
}
int main()
{
	cout<<max(50,25)<<endl;
	return 0;
}
