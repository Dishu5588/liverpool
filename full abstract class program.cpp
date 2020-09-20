#include<iostream>
using namespace std;
class shape
{
	public:
		virtual float area()=0;
		virtual float perimeter()=0;
};
class rectangle:public shape
{
	private:
	float length;
	float breadth;
	public:
		rectangle(float l,float b)
		{
			length=l;
			breadth=b;
		}
		float area()
		{
			return length*breadth;
		}
		float perimeter()
		{
			return 2*(length+breadth);
		}
};
class circle:public shape
{
	private:
		float radius;
	public:
		circle(float r)
		{
			radius=r;
		}
		float area()
		{
			return 3.14*radius*radius;
		}
		float perimeter()
		{
			return 2*3.14*radius;
		}
};
int main()
{
	shape*p=new rectangle(10,5);
	cout<<" area of rectangle "<<p->area()<<endl;
	cout<<" perimeter of rectangle is "<<p->perimeter()<<endl;
	p=new circle(5);
	cout<<" area of circle is "<<p->area()<<endl;
	cout<<" perimeter of circle is "<<p->perimeter()<<endl;
	return 0;
}
