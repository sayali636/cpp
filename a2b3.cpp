using namespace std;
#include<iostream>
class area
{
	public:
		void circle(float r);
		void circum(float r);
};
 void area::circle(float r=6.8f)
		{
			int c=3.14f*r*r;
			cout<<"\n area of circle="<<c<<endl;
		}
void area::circum(float r=9.8f)
		{
			int c=2*3.14f*r;
			cout<<"\n area of circumference="<<c<<endl;
		}
int main()
{
	area ob;
	ob.circle(3.5f);
	ob.circum();
	
}
