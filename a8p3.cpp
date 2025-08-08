using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	char ch;
	 ifstream f1;
	 ofstream f2;
	 ofstream f3;
	 f1.open("sample.txt",ios::in);
	 f2.open("char.txt",ios::out);
	 f3.open("digit.txt",ios::out);
	 if(f1.bad())
	 {
	 	cout<<"file not fount";
	 	exit(0);
	 }
	 while(!f1.eof())
	 {
	 	ch=f1.get();
	 	if(isalpha(ch))
	 	   f2<<ch;
	 	
		if(isdigit(ch))
	 	    f3<<ch;   
	 }
	 f1.close();
	 f2.close();
	 f3.close();
	cout<<"copy succ";
}
