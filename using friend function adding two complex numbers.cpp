#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int img;
	public:
	    complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}	
		void display()
		{
			cout<<real<<"+i"<<img<<endl;
		}
	friend complex operator+(complex c1,complex c2);
};
complex operator+(complex c1, complex c2)
{
	complex t;
	t.real=c1.real+c2.real;
	t.img=c1.img+c2.img;
	return t;
}
int main()
{
	complex c1(10,20);
	complex c2(20,30);
	complex c3;
	c3=c1+c2;
	c3.display();
	return 0;
}
