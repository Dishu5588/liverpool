#include<iostream>
using namespace std;
class rectangle
{
	public:
	int length;
	int breadth;
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
int main()
{
	rectangle r1,r2;
	r1.length=10;
	r1.breadth=5;
	cout<<"area of rectangle one is "<<r1.area()<<endl;
	cout<<" area perimeter of rectangle is "<<r1.perimeter()<<endl;
	return 0;
}
