#include<iostream>
#include<cstring>
using namespace std;
class student
{
	public:
	int rno;
	char name[20];
	void get_data()
	{
		cout<<"enter the roll number of student ";
		cin>>rno;
		cout<<" enter the name of the student ";
		cin>>name;
	}
	void display_data()
	{
		cout<<"roll number is "<<rno<<endl;
		cout<<" name is "<<name<<endl;
	}
};
	int main()
	{ 
		student s1,s2;
		s1.get_data();
		s1.display_data();
		s2.rno=16;
		strcpy(s2.name,"rajat");
		s2.display_data();
		return 0;
	}
