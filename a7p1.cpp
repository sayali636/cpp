#include<iostream>
using namespace std;
class item
{
	public:
       int ino,pricr;
       char iname[20];
	void accept()
	{
		cout<<"enter item id name price";
		  for(int i=0;i<n;i++)
            {
		        cin>>ino>>name>>price;		
         	}
    }
};
class dis:public item
{
	public:
      float d;
	void accepte()
	{
		cout<<"enter discount";
			cin>>d;
		}
		void disp()
		{
			
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
