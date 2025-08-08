using namespace std;
#include<iostream>
#include<fstream>
#include<stdio.h>
class city
{
  public:
     char name[20];
	 int std;
	 ofstream f1;	
	 ifstream f2;	
	 void accept(int n)
	 {
	 	f1.open("cities.txt",ios::out);
	 	for(int i=0;i<n;i++)
	 	{
  	 	cout<<"Enter city name and std code:";
	 	 cin>>name>>std;
	 	 f1<<name<<"  "<<std<<endl;  //f1 file madhe name,code write kela
	    }
	    f1.close();
	 }
	 void disp(int n)
	 {
	 	f2.open("cities.txt",ios::in);
	 	cout<<"\ncity name and std code:\n";
	 	for(int i=0;i<n;i++)
	 	{
	 	 f2>>name>>std; //f2 madhun name,code read kel...
	 	 cout<<name<<"\t"<<std<<endl;  //display kel
	    }
	 }
};
int main()
{
	city ob;
	int n;
	cout<<"Enter limit:";
	cin>>n;
	ob.accept(n);
	ob.disp(n);
}
