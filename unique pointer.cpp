#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length;
		int breadth;
	public:
		rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		int area()
		{
		return length*breadth;
	    }
};
int main()
{
unique_ptr<rectangle> ptr(new rectangle(10,5));
cout<<ptr->area()<<endl;
return 0;
}










