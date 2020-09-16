#include<iostream>
using namespace std;
class complex
{
	public:
		int real;
		int img;
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		complex operator+(complex x)
		{
			complex temp;
			temp.real=real+x.real;
			temp.img=img+x.img;
			return temp;
		}
};
int main()
{
	complex c1(3,5);
	complex c2(5,5);
	complex c3;
	c3=c2+c1;
	cout<<c3.real<<"+i"<<c3.img<<endl;
	return 0;
}
