#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public:
		int roll;
		string name;
		string branch;
	friend ofstream & operator<<(ofstream &ofs,student &s);
};
ofstream & operator<<(ofstream &ofs,student&s)
{
	ofs<<s.roll<<endl;
	ofs<<s.name<<endl;
	ofs<<s.branch<<endl;
	return ofs;
}
int main()
{
	student s1;
	s1.roll=10;
	s1.name="deshant kumar";
	s1.branch="c++ devloper";
	ofstream ofs("m.txt",ios::trunc);
	ofs<<s1;
	ofs.close();
	return 0;
}
