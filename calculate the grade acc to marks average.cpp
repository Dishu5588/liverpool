#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,total;
	float avg;
	cout<<" enter three marks:";
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	avg=total/3;
	if(avg>=60)
	cout<<"A grade";
	else if(avg>=35&&avg<60)
	cout<<"B grade";
	else
	cout<<"C grade";
	return 0;
}
