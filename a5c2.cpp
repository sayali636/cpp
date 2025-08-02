using namespace std;
#include<iostream>
class student
{
	public:
		int rno;
		char name[20];
		void accepts()
		{
			cout<<"enter rno name";
			cin>>rno>>name;
		}
		void disp()
		{
			cout<<"roll no="<<rno<<endl;
			cout<<"name="<<name<<endl;
		}
};
class imark:public virtual student
{
	public:
		int im[5],i;
		void accepti()
		{
			cout<<"enter 5 sub mark out of 30";
			for(i=0;i<5;i++)
			{
				cout<<"enter";
				cin>>im[i];
			}
		}
		void dispp()
		{
			cout<<"internal mark=";
			for(i=0;i<5;i++)
	     	{
			cout<<im[i];
	    	}
		}
};
class emark:public virtual student
{
	public:
		int em[5],i;
		void accepte()
		{
			cout<<"enter 5 sub mark out of 70";
			for(i=0;i<5;i++)
			{
				cout<<"enter";
				cin>>em[i];
			}
		}
		void dispp()
		{
			cout<<"external mark=";
			for(i=0;i<5;i++)
	     	{
			cout<<em[i];
	    	}
		}
};
class result:public imark,public emark
{
	public:
		int t[5],i,s=1;
	     void cal()
	     {
	     	for(i=0;i<5;i++)
	     	{
	     		t[i]=im[i]+em[i];
			 }
			
			 for(i=0;i<5;i++)
			{
				 cout<<s++<<" sub total=";
				cout<<t[i]<<endl;
			}
		 }
		 void pof()
		 {
		 	for(i=0;i<5;i++)
		 	{
		 		if(im[i]<=30&&im[i]>=12&&em[i]<=70&&em[i]>=28)
		 		{	
		 			cout<<"pass";
				 }
				 else
				 cout<<"fail";
				  }
		 }
};
int main()
{
	result ob;
	ob.accepts();
	ob.accepti();
	ob.accepte();
	ob.cal();
	ob.pof();
}
