#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public:
		int roll;
		string name;
		string branch;
		friend ifstream & operator >>(ifstream &ifs,student &s);
};
 ifstream & operator >>(ifstream &ifs,student &s)
{
	ifs>>s.roll;
	ifs>>s.name;
	ifs>>s.branch;
	return ifs;
}
int main()
{
	student s1;
	ifstream ifs("m.txt");
	ifs>>s1;
	cout<<"roll no. is "<<s1.roll<<endl;
	cout<<"name is "<<s1.name<<endl;
	cout<<"branch is "<<s1.branch<<endl;
	ifs.close();
	return 0;
}
