#include<iostream>
using namespace std;
class linfo
{
  public:
  int rno;
  char sname[20],c[2];
  float per;
  void acceptl()
  {
      cout<<"enter rno,name,class,per";
	  cin>>rno>>sname>>c>>per;	
  }	
};
class einfo
{
	public:
		int noh,charg;
		void accepte()
		{
		cout<<"enter no_of_hours_worked,charges_per_hours";
		cin>>noh>>charg;
       }
};
class ieinfo:public linfo,public einfo
{
	public:
		 ieinfo()
		{
		cout<<"rno="<<rno<<endl;
		cout<<"sname="<<sname<<endl;
		cout<<"class="<<c<<endl;
		cout<<"per="<<per<<endl;
		cout<<"no_of_hours_worked="<<noh<<endl;
		cout<<"charges="<<charg<<endl;
		cout<<"total money earn="<<noh*charg<<endl;
	}
};
int main()
{
	ieinfo ob;
	ob.acceptl();
	ob.accepte();
	ob.ieinfo();
}
