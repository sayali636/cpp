
using namespace std;
#include<iostream>
class student
{
	public:
		int rno;
		char name[20];
		void accept()
		{
			cout<<"enter rno name";
			cin>>rno>>name;
		}
};
class amark:public virtual student
{
	public:
		int m1,m2,m3;
		void accepta()
		{
			cout<<"enter 3 sub mark";
			cin>>m1>>m2>>m3;
		}
};
class emark:public virtual student
{
	public:
		int m;
		void accepte()
		{
			cout<<"enter extra activity mark";
			cin>>m;
		}
};
class result:public amark,public emark
{
	public:
		int t=0;
		void cal()
		{
			t=t+m1+m2+m3+m;
			cout<<"total mark="<<t;
			if(t>299)
			cout<<"A grade";
			else
			 cout<<"B grade";
		}
};
int main()
{
	result ob;
	int ch;
	do{
	cout<<"1    accept student info\n 2 accept academic info\n 3 extra acvityti \n4 result";
	cout<<"enter your choise";
	cin>>ch;
	switch(ch)
	{
		case 1:ob.accept();
		       break;
		case 2:ob.accepta();
		       break;
		case 3:ob.accepte();
		       break;
		case 4:ob.cal();
		       break;
	}
}while(ch<5);
	
}
