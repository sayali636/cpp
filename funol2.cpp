using namespace std;
#include<iostream>
class array
{
	public:
		int n,i,j,t;
		float s;
		void sort(int a[],int n)
		{
			for(j=1;j<=n;j++)
			{
				for(i=0;i<n-j;i++)
				{
					if(a[i]>a[i+1])
					 {
					 	t=a[i];
					 	a[i]=a[i+1];
					 	a[i+1]=t;
					 }
				}
			}
			for(i=0;i<n;i++)
			{
				cout<<a[i];
			}
		}
		void sort(float b[],int n)
		{
			for(j=1;j<=n;j++)
			{
				for(i=0;i<n-j;i++)
				{
					if(b[i]>b[i+1])
					 {
					 	t=b[i];
					    b[i]=b[i+1];
					 	b[i+1]=t;
					 }
				}
			}
			for(i=0;i<n;i++)
			{
				cout<<b[i];
			}
		}
		
};
int main()
{ int n,a[100],i;
  float b[100];
	array ob;
	array ob1;
	 cout<<"enter limit";
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	
	 }
	ob.sort(a,n);
	
	cout<<"enter limit";
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	 	cin>>b[i];
	 	
	 }
	ob1.sort(b,n);
}
