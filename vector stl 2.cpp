#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v={10,20,30,40,50};
	v.push_back(60);
	v.push_back(70);
	for(int x:v)
	cout<<x;
	return 0;
}
