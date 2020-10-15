#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v={2,4,6,8,10};
	v.push_back(60);
	v.push_back(70);
    for(int x:v)
    cout<<x;
    v.pop_back();
	return 0;
}
