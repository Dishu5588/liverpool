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
		int getbreadth()
		{
			return breadth;
		}
		void setlength(int l);
		void setbreadth(int b);
		int area();
		int perimeter();
		bool issquare();
		~rectangle();
};
class cuboid:public rectangle
{
	private:
		int height;
	public:
		cuboid(int h)
		{
			setheight(h);
		}
		int getheight()
		{
			return height;
		}
		void setheight(int h)
		{
			height=h;
		}
		int volume()
		{
		  return	getlength()*getbreadth()*height;
		}
};
rectangle::rectangle()
{
	length=1;
	breadth=1;
}
rectangle::rectangle(int l,int b)
{
	setlength(l);
	setbreadth(b);
}
rectangle::rectangle(rectangle &r)
{
	length=r.length;
	breadth=r.breadth;
}
void rectangle::setlength(int l)
{
	length=l;
}
void rectangle::setbreadth(int b)
{
	breadth=b;
}
int rectangle::area()
{
	return length*breadth;
}
int rectangle::perimeter()
{
	return 2*(length+breadth);
}
bool rectangle::issquare()
{
	return length==breadth;
}
rectangle::~rectangle()
{
	cout<<" rectangle is destroyed"<<endl;
}
int main()
{
	cuboid c(10);
	c.setlength(15);
	c.setbreadth(5);
	cout<<"volume is "<<c.volume()<<endl;
	return 0;
}
