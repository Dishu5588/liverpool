#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream ifs ("my.txt");
	if(!ifs)
	cout<<"file is not present"<<endl;
	string name;
	int roll;
	string branch;
	ifs>>name>>roll>>branch;
	ifs.close();
	cout<<"name is "<<name<<endl;
	cout<<"roll no. is  "<<roll<<endl;
	cout<<"branch is "<<branch<<endl;
	if(ifs.eof())
	cout<<"end of file reached"<<endl;
	return 0;
}
