#include<iostream>
using namespace std;
int main()
{
	int n,i,*p;
	
	cout<<"enter limit";
	cin>>n;
	p=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter persentage ";
	    cin>>p[i];
	}
	cout<<" persentage=";
	for(i=0;i<n;i++)
	{
		
	    cout<<p[i]<<endl;
	}
	delete p;	
}
