#include<iostream>
using namespace std;
int main()
{
	int v,u,a;
	float speed;
	cout<<" enter intial velocity,final velocity,acceleration:";
	cin>>u>>v>>a;
	speed=(float)(v*v-u*u)/(2*a);
	cout<<" speed is "<<speed;
	return 0;
}
