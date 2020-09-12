#include<iostream>
using namespace std;
class student
{
	private:
		int rno;
		char name[20];
	public:
		void get_data();
		void display_data();
};
void student ::get_data()
{
	cout<<"enter the roll number of the student ";
	cin>>rno;
	cin.clear();
	cout<<"enter name of the student ";
	cin>>name;
}
void student ::display_data()
{
	cout<<"roll number of the student is "<<rno<<endl;
	cout<<" name of the student is "<<name<<endl;
}
int main()
{
	student s1,s2;
	s1.get_data();
	s1.display_data();
	s2.get_data();
	s2.display_data();
	return 0;
}
