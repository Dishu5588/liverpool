#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<" enter three number:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d==0)
	{
		cout<<" roots are real and equal";
		cout<<(-b/(2*a));
		cout<<(-b/(2*a));
	}
	else if (d>0)
	{
		cout<<" roots are real and different";
		cout<<(-b+sqrt(d))/(2*a);
		cout<<(-b-sqrt(d))/(2*a);
	}
	else
	cout<<" roots are imaginary";
	return 0;
}
