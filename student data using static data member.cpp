#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		string name;
		static int addno;
		student(string n)
		{
			addno++;
			roll=addno;
			name=n;
		}
		void display()
		{
			cout<<" name "<<name<<endl<<" roll "<<roll<<endl;
		}
};
int student::addno=0;
int main()
{
	student s1("john");
	student s2("ravi");
	student s3("khan");
	s1.display();
	s2.display();
	s3.display();
	cout<<"number of addmission "<<s3.addno<<endl;
	return 0;
}
