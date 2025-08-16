using namespace std;
#include<iostream>
#include<iomanip>
class Train
{
	public:
		int t_no,no_of_seats;
		char t_name[20],source_s[20],desti_s[20];
	void acceptt()
 	{
		cout<<"enter tno tname no_of_seats source destination :"<<endl;
	    cin>>t_no>>t_name>>no_of_seats>>source_s>>desti_s;
    }
	void disp()
	{
		cout<<"train no="<<t_no<<endl;
		cout<<"train name="<<t_name<<endl;
		cout<<"train no_of_seats="<<no_of_seats<<endl;
		cout<<"source station="<<source_s<<endl;
		cout<<"destination station="<<desti_s<<endl;
	}
	
};
int main()
{
	Train ob[5];
	int n;
	cout<<"enter limit:"<<endl;
	cin>>n;
	 cout<<"enter train info.."<<endl;
	  for(int i=0;i<n;i++)
	 	{
		  ob[i].acceptt();
	    }
	 cout<<"disp train details"<<endl;
	 for(int i=0;i<n;i++)
	   {
	   	  ob[i].disp();
	   }
}
