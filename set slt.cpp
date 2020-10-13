#include<iostream>
#include<set>
using namespace std;
int main()
{
	set <int> v={10,20,30,40,50};
	v.insert(60);
	v.insert(70);
	set <int>::iterator itr;
	cout<<"using iterators "<<endl;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr;
	}
	return 0;
}
