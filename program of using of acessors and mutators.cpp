#include<iostream>
using namespace std;
class rectangle
{
	private:
	int length;
	int breadth;
	public:
	void setlength(int l)
	{
		if (l>0)
		length=l;
		else
		length=1;
	}
	void setbreadth(int b)
	{
		if (b>0)
		breadth=b;
		else
		breadth=1;
	}
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
	int getlength()
	{
		return length;
	}
	int getbreadth()
	{
		return breadth;
	}
};
int main()
{
	rectangle r;
	r.setlength(10);
	r.setbreadth(5);
	cout<<" area of rectangle is "<<r.area()<<endl;
	cout<<" length is "<<r.getlength()<<endl;
	cout<<" breadth is "<<r.getbreadth()<<endl;
	return 0;
}
