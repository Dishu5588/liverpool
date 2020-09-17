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
		friend ostream& operator<<(ostream&o,complex c);
};
ostream& operator<<(ostream&o,complex c)
{
	o<<c.real<<"+i"<<c.img<<endl;
}
int main()
{
	complex c1(10,20);
	cout<<c1;
	return 0;
}
