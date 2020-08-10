#include<iostream>
using namespace std;
int main()
{
	float bill;
	float discount;
	float discounted;
	cout<<" enter the bill amount ";
	cin>>bill;
	if(bill<100)
	cout<<"no discount";
	else if(bill>=100&&bill<500)
	discount=bill*10/100;
	else
	{
	discount=bill*20/100;
    }
	discounted=bill-discount;
	cout<<"bill amount is "<<bill<<endl;
	cout<<" discount "<<discount<<endl;
	cout<<"amount after discount"<<discounted<<endl;
	return 0;
}
