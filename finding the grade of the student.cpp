#include<iostream>
using namespace std;
class student
{
	private:
	int roll;
	string name;
	int mathmarks;
	int phymarks;
	int chemmarks;
	public:
		student(int r,string n,int m,int p,int c)
		{
			roll=r;
			name=n;
			mathmarks=m;
			phymarks=p;
			chemmarks=c;
		}
		int total()
		{
			return mathmarks+phymarks+chemmarks;
		}
		char grade()
		{
			float avg=total()/3;
			if(avg>=60)
			return 'A';
			else if(avg>40&&avg<60)
			return 'b';
			else
			return 'c';
		}
};
      int main()
      {
      	int roll;
      	int m,p,c;
      	string name;
      	cout<<" enter the roll number of student";
      	cin>>roll;
      	cout<<" enter the name of the student";
      	cin>>name;
      	cout<<"enter the marks of 3 subjects ";
      	cin>>m>>p>>c;
      	student s(roll,name,m,p,c);
      	cout<<" total marks is "<<s.total()<<endl;
      	cout<<" grade of student is "<<s.grade()<<endl;
      	return 0;
	  }
