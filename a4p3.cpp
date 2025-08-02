#include<iostream>
using namespace std;
class myarray
{
	public:
		int *a,i;
		myarray(int n)
		{
			a=new int[n];
			for(i=0;i<n;i++)
			{
				cout<<"enter number";
				cin>>a[i];
			}
				for(i=0;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(a[i]>a[i+1])
			 {
			 	int t=a[i];
			 	a[i]=a[i+1];
			 	a[i+1]=t;
			 }
		}
	}
	cout<<"sorted array=";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}

}
};
int main()
{
	int n;
	cout<<"enter limit";
	cin>>n;
	myarray ob(n);
	
}
