#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int> v={10,20,30,40,50};
	v.push_back(60);
	v.push_back(70);
	list<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	cout<<*itr;
	return 0;
}
