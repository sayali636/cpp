using namespace std;
#include<iostream>
#include<iomanip>
class Teacher
{
	public:
		char t_name[20],t_city[20];
		int t_con_no;
	void acceptt()
	{
		cout<<"enter 5 teacher name city con no:"<<endl;
		cin>>t_name>>t_city>>t_con_no;
	}
	void disp()
	{
		cout.setf(ios::right,ios::adjustfield);
		cout<<setfill('*');
		cout.width(10);
		cout<<t_name<<endl;
		cout<<setfill('*');
		cout.width(10);
		cout<<t_city<<endl;
		cout.setf(ios::left,ios::adjustfield);
		cout<<setfill('*');
		cout.width(10);
		cout<<t_con_no<<endl;
	}
};
int main()
{
	Teacher ob[5];
	 cout<<"enter teacher info.."<<endl;
	  for(int i=0;i<5;i++)
	 	{
		  ob[i].acceptt();
	    }
	 cout<<"disp teacher details"<<endl;
	 for(int i=0;i<5;i++)
	   {
	   	  ob[i].disp();
	   }
}
