using namespace std;
#include<iostream>
class grandfather
{
  public:
    char gname[20],sname[20],add[20];
	void acceptgf()
	{
	  cout<<"Enter Grand father name surname add:";
	  cin>>gname>>sname>>add;	
	}	
};
class father:public grandfather
{
 public:
    char fname[20],m[10];
	void acceptf()
	{
	  cout<<"Enter Father Name mobile no:";
	  cin>>fname>>m;	
	}	
};
class child:public father
{
	public:
 char cname[20];
 int age;
   void acceptc()
   {
   	 cout<<"Enter Child Name and age: ";
   	 cin>>cname>>age;
   }
   void disp()
   {
   	cout<<" gname="<<gname<<endl;
   	cout<<"Sname ="<<sname<<endl;
   	cout<<"add="<<add<<endl;
   	cout<<"fName="<<fname<<endl;
   	cout<<"Mobileno="<<m<<endl;
   	cout<<"cname="<<cname<<endl;
   	cout<<" Age="<<age<<endl;
   }
};
int main()
{
	child ob;
	ob.acceptgf();
	ob.acceptf();
	ob.acceptc();
	ob.disp();
}
