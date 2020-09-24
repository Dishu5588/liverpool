#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
	public:
		int area()
		{
			return length*breadth;
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}
		void setlength(int l)
		{
			if(l>0)
			length=l;
			else
			length=1;
		}
		void setbreadth(int b)
		{
			if(b>0)
			breadth=b;
			else
			breadth=1;
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
	rectangle r1;
	r1.setlength(10);
	r1.setbreadth(5);
	cout<<"area of rectangle is "<<r1.area()<<endl;
	return 0;
}
