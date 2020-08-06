#include<iostream>
using namespace std;
int main()
{
	int hour;
	cout<<" enter the hour:";
	cin>>hour;
	if(hour>=9&&hour<=18)
	{
		cout<<" working hours ";
	}
	else
	{
		cout<<" leisure hours";
	}
	return 0;
}
