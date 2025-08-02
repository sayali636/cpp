using namespace std;
#include<iostream>
class emp
{
	public:
		int ecode,n;
		char ename[20];
		  void accept()
		  {
		  	cout<<"enter limit";
		  	cin>>n;
		  	for(i=0;i<n;i++)
		  	{
		  		cout<<"enter";
		  		cin>>ecode>>ename;
			  }
		  }
};
class manager:public emp
{
	public:
		char des[30],cdues[40];
		
}
