#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list <int> v={10,20,30,40,50};
	v.push_front(60);
	v.push_front(70);
	forward_list<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	cout<<*itr;
	return 0;
}
