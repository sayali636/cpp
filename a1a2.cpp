#include<iostream>
using namespace std;
int main()
{
	int n,i,f=0,s=1,t;
	cout<<"enter limit";
	cin>>n;
	cout<<"fibonacciseries=";
	cout<<f<<" "<<s;
	
	for(i=1;i<=n;i++)
	{
		
	     t=f+s;
	     cout<<" "<<t;
	     f=s;
	     s=t;
	}
		
}     
