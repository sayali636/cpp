#include<iostream>
using namespace std;
class internal
{
	public:
	int m[5],i;
	void accepti()
	{
		cout<<"enter 5 sub mark";
		for(i=0;i<5;i++)
		{
			cout<<"enter";
			cin>>m[i];
		}
		
	}
	
};
class external
{
	public:
	int m1[5],i;
	void accepte()
	{
		cout<<"enter 5 sub mark";
		for(i=0;i<5;i++)
		{
			cout<<"enter";
			cin>>m1[i];
		}
		
	}
	
};
class practical
{
	public:
	int p;
	void acceptp()
	{
		cout<<"enter practical mark";
		
			cin>>p;
		
		
	}
	
};
class result:public internal,public external,public practical
{
	public:
	int i,s=0,t=0;
	float r;
	void accepti()
	{
		cout<<"enter 5 sub mark";
		for(i=0;i<5;i++)
		{
		  s=s+m[i];
		  	
		
		}
		for(i=0;i<5;i++)
		{
		  t=t+m1[i];
		  	
		
		}
		r=(float)(s+t+p/100)*6;
			cout<<"total persentage="<<r;
	}

	
};
int main()
{
	result ob;
	ob.accepti();
	ob.accepte();
	ob.acceptp();
}
