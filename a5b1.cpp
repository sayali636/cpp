using namespace std;
#include<iostream>
class personnel
{
	public:
		char name[20],addr[30],email[40],bdate[10];
		 void accept1()
		 {
		 	cout<<"enter name addr email birth date";
		 	cin>>name>>addr>>email>>bdate;
		 }
		 void disp();
};
class academic
{
	public:
		int tenm,twelthm;
		char cob[20];
		 void accept()
		 {
		 	cout<<"enter 10th 12th class obtained";
		 	cin>>tenm>>twelthm>>cob;
		 }
};
class biodata:public personnel,public academic
{
	public:
		void disp()
		{
			cout<<"name="<<name<<"  "<< addr <<email <<bdate;
			cout<<"enter 10th 12th class obtained";
		}
};
int main()
{
	biodata ob;
	 ob.accept1();
	  ob.accept();
	 ob.disp();
}
