#include<iostream>
using namespace std;
int main()
{
	int n,s=0,d,n1;
	cout<<"enter number";
	cin>>n;
	n1=n;
	while(n>0)
	{
	    d=n%10;
		s=s+d*d*d;
		n=n/10;	
	}
	if(n1==s)
	{
		cout<<"armstrong number";
	}
	else
	
		cout<<"not armstrong number";
}     
