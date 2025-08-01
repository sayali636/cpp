#include<iostream>
using namespace std;
int p,s,m=0,n;
char t[20],au[10],pub[30];
void accept()
{
	
	cout<<"enter title of book=";
	cin>>t;
	cout<<"enter author of book=";
	cin>>au;
	cout<<"enter price of book=";
	cin>>p;
	cout<<"enter publisher of book=";
	cin>>pub;
	cout<<"enter stock of book=";
	cin>>s;
}
void sale()
{
    cout<<"\nnumber of copies to be sale="<<m;	
}
void pur()
{
	if(0>s)
	{
	   cout<<"stock is not available";	
	}
	else
	{
	
	cout<<"\nenter number of book to be purchase=";
	cin>>n;
	s=s-n;
	m=m+n;
	
}
}
void disp()
{
	cout<<"\n\nbook title="<<t<<endl;
	cout<<"book author="<<au<<endl;
	cout<<"book price="<<p<<endl;
	cout<<"book publisher="<<pub<<endl;
	cout<<"book stock="<<s<<endl;
	cout<<"book sales="<<m<<endl;
	cout<<"book purchase="<<n;	
}
int main()
{
	int ch;
	do{
	cout<<"1=accept book details\n 2=sale book\n 3=purchase book\n 4=display";
	cout<<"\n\nenter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:accept();
		       break;
		case 2:sale();
		       break;
		case 3:pur();
		       break;
		case 4:disp();
		       break;
	}
}while(ch<5);
}


