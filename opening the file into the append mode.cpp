#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofs ("my.txt",ios::app);
	ofs<<"john"<<endl;
	ofs<<25<<endl;
	ofs<<"cs"<<endl;
	ofs.close();
	return 0;
}
