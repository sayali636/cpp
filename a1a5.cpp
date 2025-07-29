#include<iostream>
using namespace std;
int main()
{
	int a,b,ch, c;
	
	cout<<"enter 2 nos";
	cin>>a>>b;
	cout<<"1=addition\n"<<"2=sub\n"<<"3=multi\n"<<"4=div\n";
	cout<<"enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1: c=a+b;
		     cout<<"addition="<<c;
		     break;
		
		case 	2:cout<<"sub="<<a-b;
		     break;
		case 	3:cout<<"mul="<<a*b;
		     break;
		case 	4:cout<<"div="<<a/b;
		     break;     
	}
	
}
