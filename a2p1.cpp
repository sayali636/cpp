#include<iostream>
using namespace std;
inline int add(float a,float b)
{
	return a+b;
}
inline int sub(float a,float b)
{
	return a-b;
}
inline int mul(float a,float b)
{
	return a*b;
}
inline int div(float a,float b)
{
	return a/b;
}
int main()
{
	cout<<"addition="<<add(34.3f,92.3f)<<endl;
	cout<<"substraction="<<sub(31.34f,64.25f)<<endl;
	cout<<"multiplication="<<mul(92.2f,96.4f)<<endl;
	cout<<"divission="<<div(24.33f,86.9f)<<endl;
	
}
