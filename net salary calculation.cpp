#include<iostream>
using namespace std;
int main()
{
	float basic;
	float netsal;
	float percentallowance;
	float percentdeduction;
	cout<<" enter basic salary";
	cin>>basic;
	cout<<"enter percentallowance";
	cin>>percentallowance;
	cout<<" enter percentdeduction";
	cin>>percentdeduction;
	netsal=basic+basic*percentallowance/100-basic*percentdeduction/100;
	cout<<netsal;
	return 0;
}
