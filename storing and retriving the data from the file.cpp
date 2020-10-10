#include<iostream>
#include<fstream>
using namespace std;
class item
{
	private:
		string name;
		float price;
		int qty;
	public:
		item()
		{
			
		}
		item(string n,float p,int q);
		friend ifstream & operator >>(ifstream &ifs,item &i);
		friend ofstream & operator <<(ofstream &ofs,item &i);
		friend ostream & operator <<(ostream &os,item &i);
};
int main()
{
	int n;
	string name;
	float price;
	int qty;
	cout<<"enter the number of items:"<<endl;
	cin>>n;
	item *list[n];
	cout<<" enter all the item "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" enter "<<i+1<<" item name price and quantity "<<endl;
		cin>>name;
		cin>>price;
		cin>>qty;
		list[i]=new item(name,price,qty);
	}
	ofstream ofs("item.txt");
		for(int i=0;i<n;i++)
		{
			ofs<<*list[i];
		}
	item item;
	ifstream ifs("item.txt");
		for(int i=0;i<n;i++)
		{
			ifs>>item;
			cout<<"item "<<i+1<<item<<endl;
		}
		return 0;
}
item::item(string n,float p,int q)
{
	name=n;
	price=p;
	qty=q;
}
ofstream & operator<<(ofstream &ofs,item &i)
{
	ofs<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
}
ifstream & operator>>(ifstream &ifs,item &i)
{
	ifs>>i.name>>i.price>>i.qty;
}
ostream & operator<<(ostream &os,item &i)
{
	os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
}
