using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	char ch;
	ifstream f1;
	ofstream f2;
	
	f1.open("abc.txt",ios::in);
	f2.open("pqr.txt",ios::out);
	
	if(f1.bad())
	{
		cout<<"file not found";
		exit(0);
	}
	while(!f1.eof())
	{
		ch=f1.get();
		f2.put(ch);
		cout<<"copy file succ....";
	}
}
