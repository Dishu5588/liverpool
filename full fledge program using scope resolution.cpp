#include<iostream>
using namespace std;
class rectangle 
{
	private:
		int length;
		int breadth;
	public:
		rectangle();
		rectangle(int l,int b);
		rectangle(rectangle &r);
		int getlength()
		{
			return length;
		}
		getbreadth()
		{
			return breadth;
		}
		void setlength(int l);
		void setbreadth(int b);
		int area();
		int perimeter();
		bool isquare();
		~rectangle();
};
rectangle::rectangle()
{
	length=1;
	breadth=1;
}
rectangle::rectangle(int l,int b)
{
	length=l;
	breadth=b;
}
rectangle::rectangle(rectangle &r)
{
	length=r.length;
	breadth=r.breadth;
}
void rectangle::setlength(int l)
{
	if(l>0)
	length=l;
	else
	length=0;
}
void rectangle::setbreadth(int b)
{
	if(b>0)
	breadth=b;
	else
	breadth=0;
}
int rectangle::area()
{
	return length*breadth;
}
int rectangle::perimeter()
{
	return 2*(length+breadth);
}

rectangle::~rectangle()
{
	cout<<"rectangle destroyed"<<endl;
}
int main()
{
	rectangle r1(10,10);
	cout<<"area of rectangle is "<<r1.area()<<endl;
	cout<<"length is "<<r1.getlength()<<endl;
	cout<<" breadth is "<<r1.getbreadth()<<endl;
	return 0;
}
