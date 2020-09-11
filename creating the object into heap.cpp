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
	rectangle *r;
	r=new rectangle;
	rectangle *p=new rectangle();
	p->length=10;
	p->breadth=5;
	r->length=10;
	r->breadth=5;
	cout<<" area of rectangle is "<<p->area()<<endl;
	cout<<" area of rectangle is "<<r->area()<<endl;
	return 0;
}
