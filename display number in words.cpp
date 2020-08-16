#include<iostream>
using namespace std;
int main()
{
	int rev=0,n,r;
	cout<<" enter the value of n ";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev%10==1)
	cout<<"ONE"<<endl;
	else if(rev%10==2)
	cout<<"TWO"<<endl;
		else if(rev%10==2)
	cout<<"TWO"<<endl;
		else if(rev%10==3)
	cout<<"THREE"<<endl;
		else if(rev%10==4)
	cout<<"FOUR"<<endl;
		else if(rev%10==5)
	cout<<"FIVE"<<endl;
		else if(rev%10==6)
	cout<<"SIX"<<endl;
		else if(rev%10==7)
	cout<<"SEVEN"<<endl;
		else if(rev%10==8)
	cout<<"EIGHT"<<endl;
		else if(rev%10==9)
	cout<<"NINE"<<endl;
		else if(rev%10==0)
	cout<<"ZERO"<<endl;
	else
	cout<<" invalid number";
	return 0;
}
