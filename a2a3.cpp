using namespace std;
#include<iostream>
int ano,cno,bal;
  	char name[20],addr[20];
  int accept()
  {
  
  	cout<<"enter a/c no";
  	cin>>ano;
  	cout<<"enter name";
  	cin>>name; 
	cout<<"enter addr";
  	cin>>addr;
	cout<<"enter contact no";
  	cin>>cno;
  	cout<<"enter bal";
  	cin>>bal;
  }
 void disp()
 {
 	int dep;
 	cout<<"enter deposit";
 	cin>>dep;
    cout<<" a/c no"<<ano<<endl;
    cout<<" name"<<name<<endl;
    cout<<" address"<<addr<<endl;
    cout<<" contact no"<<cno<<endl;
    cout<<" total balance"<<bal+dep;
    
  } 
int main()
{
	accept();
	disp();
}
