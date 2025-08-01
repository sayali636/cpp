using namespace std;
#include<iostream>
int main()
{
	int *a,i,n;
	cout<<"enter limit";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i=i+2)
	{
		cout<<a[i];
	}
	
}
