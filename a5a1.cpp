#include<iostream>
using namespace std;
class product
{
	public:
		int pid,price;
		char pname[20];
		void acceptp()
		{
			cout<<"enter pid,pname,price";
			cin>>pid>>pname>>price;
		}
	
};
class dis:public product
{
	public:
		int p=0,d;
		float dis;
		void acceptd()
		{
			cout<<"enter discount";
			cin>>dis;
		}
		void cal()
		{
			p=p+price;
			d=(p/dis)*100;
			
		}
		void disp()
		{
			cout<<" pid="<<pid<<endl;
			cout<<" pname="<<pid<<endl;
			cout<<" price="<<pid<<endl;
			cout<<" dis="<<pid<<endl;
			cout<<"total="<<p<<endl;
			cout<<" total discount="<<d<<endl;
		}
};
int main()
{
	int n,i;
	dis ob[100];
	cout<<"enter limit";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ob[i].acceptp();
		ob[i].acceptd();
		ob[i].cal();
	}
	for(i=0;i<n;i++)
	{
		ob[i].disp();
		
	}
	
	
}
