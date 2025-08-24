using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	char ch;
	ifstream f1;
	
	f1.open("abc.txt",ios::in);
	 if(!f1.good())
	 {
	 	cout<<"file not found";
	 	exit(0);
	 }
	 while(!f1.eof())
	 {
	 	ch=f1.get();
	 	cout<<ch;
	 }
	 f1.close();
}
