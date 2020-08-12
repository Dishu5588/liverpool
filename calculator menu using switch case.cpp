#include<iostream>
using namespace std;
int main()
{
	cout<<"Menu"<<endl;
	cout<<"1. Add \n"<<"2. Sub \n"<<"3. Mul \n"<<"4. div \n";
	int option;
	cout<<" enter the choice:";
	cin>>option;
	int a,b,c;
	cout<<" enter 2 nos:";
	cin>>a>>b;
	switch(option)
	{
		case 1: c=a+b;
		        break;
		case 2: c=a-b;
		        break;
	    case 3: c=a*b;
	            break;
	    case 4: c=a/b;
	            break;
	    default: cout<<" invalid choice";
	}
	cout<<" result is"<<c;
	return 0;
}
