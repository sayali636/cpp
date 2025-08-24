using namespace std;
#include<iostream>
#include<string.h>
class College
{
    public:
      int cid,e_year;
      char cname[20],u_name[20];
      void accept()
      {
        cout<<"Enter College Id cName University name Year:";
        cin>>cid>>cname>>u_name>>e_year; 
      }     
      void disp(College ob[],char uname[20],int n)
      {
        int i,f=0;
        for(i=0;i<n;i++)
        {
          if(strcmp(ob[i].u_name,uname)==0)
          {
             f=1;
             cout<<"\n College Id="<<ob[i].cid;
             cout<<"\n College Name="<<ob[i].cname;
             cout<<"\n College Est Year="<<ob[i].e_year;
          }
        }
        if(f==0)
           cout<<"\n Record not found...";
      }
      void disp(College ob[],int year,int n)
      {
        int i,f=0;
        for(i=0;i<n;i++)
        {
          if(ob[i].e_year==year)
          {
             f=1;
             cout<<"\n College Id="<<ob[i].cid;
             cout<<"\n College Name="<<ob[i].cname;
             cout<<"\n College University="<<ob[i].u_name;
          }
        }
        if(f==0)
           cout<<"\n Record not found...";
      }
};
int main()
{
   College ob[100],obj;
    int i,n,ch,y;
     char uname[20];
    do
    {
       cout<<"\n 1-accept \n 2-disp by year \n 3-disp by uname";
       cin>>ch;
       switch(ch)
       {
          case 1: cout<<"\n Enter Limit:";
                      cin>>n;
                      for(i=0;i<n;i++)
                         ob[i].accept();
                       break;
         case 2: cout<<"\n Enter Year :";
                     cin>>y;
                     obj.disp(ob,y,n);
                     break;
         case 3: cout<<"\n Enter Univ Name:";
                     cin>>uname;
                     obj.disp(ob,uname,n);
       }  
	   }while(ch<4);
}
