#include<iostream>
using namespace std;
class rectangle 
{
	private:
		int length;
		int breadth;
	public:
		rectangle()  //non parameterised constructor 
		{
			length=1;
			breadth=1;
		}
		rectangle(int l,int b)   // parameterised constructor
		{
			setlength(l);
			setbreadth(b);
		}
		rectangle(rectangle &r)  // copy constructor
		{
			length=r.length;
			breadth=r.breadth;
		}
		void setlength(int l)
		{
			if (l>0)
			length=l;
			else
			length=0;
		}
		void setbreadth(int b)
		{
			if (b>0)
			breadth=b;
			else
			breadth=0;
		}
		int getlength()
		{
			return length;
		}
		int getbreadth()
		{
			return breadth;
		}
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
	rectangle r(10,5);
	rectangle r2(r);
	cout<<" area of rectangle is "<<r2.area()<<endl;
	return 0;
}
