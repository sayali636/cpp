//using namespace std;
#include<iostream>
#include<string>
using namespace std;
class Student
{
  public:
     int rno;
     char name[20],sclass[2];
     void accept()
     {
       cout<<"Enter Roll no and Name class:";
       cin>>rno>>name>>sclass;
     }
    void disp()
    {
      cout<<"\n Roll no="<<rno;
      cout<<"\n Name="<<name;
      cout<<"\n class="<<sclass;
    }
};
class internal_Marks:public virtual Student
{
  public:
   int intm[5],j;
   void acceptl()
   {
      cout<<"Enter five Subject Marks:"<<endl;
       for(j=0;j<5;j++)
       {
       	 cin>>intm[j];
	   }
   }
   void disp1()
   {
   	  cout<<"display internal marks:"<<endl;
   	   for(j=0;j<5;j++)
   	   {
   	   	 cout<<"\t"<<intm[j]<<endl;
		}
   }
};
class External_marks:virtual public  Student
{
   public:
      int ext[5],i;
      void accepte()
      {
        cout<<"Enter five subject MArks:"<<endl;
         for(i=0;i<5;i++)
         {
         	cin>>ext[i];
		 }
      }
      void disp2()
   {
   	  cout<<"display external marks:"<<endl;
   	   for(i=0;i<5;i++)
   	   {
   	   	 cout<<"\t"<<ext[i]<<endl;
		}
   }
};
class Result:public internal_Marks,public External_marks
{
   public:
     int t[5],i,j,k;
     void calc()
     {
         for(k=0;k<5;k++)
         {
         	t[k]=intm[k++]+ext[k++];
		 }
     }
    void dispresult()
    {
    	cout<<"result:";
    	/* for(int i=0;i<5;i++)
    	 {
    	 	if(intm[i]>=20&&ext[i]>=35&&t[i]>=50)
			 cout<<"pass";
			 else
			  cout<<"fail"<<endl;
		 }
		 cout<<"internal="<<intm[i]<<endl;
		 cout<<"external="<<ext[i]<<endl;*/
		 for(k=0;k<5;k++)
		 {
		 cout<<"total="<<t[k]<<endl;
	}
}
    
};
int main()
{
  Result ob; 
   int ch;
    do{
    	cout<<"1-accept student info"<<endl;
		cout<<"2-internal_mark "<<endl;
		 cout<<"3-external_mark"<<endl;
		 cout<<" 4-total"<<endl;
	    cout<<"enter choice:";
	     cin>>ch;
	     switch(ch)
	     {
	     	case 1:ob.accept();
	     	       ob.disp();
	     	       break;
	        case 2:ob.acceptl();
	     	       ob.disp1();
	     	       break; 
	        case 3:ob.accepte();
	     	       ob.disp2();
	     	       break;
	        case 4:ob.calc();
	     	       ob.dispresult();
	     	       break;
	     	default:cout<<"invalid chioce";
		 }
	}while(ch<=4);
}
