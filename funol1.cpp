using namespace std;
#include<iostream>
class array
{
	public:
		int n,i,j,t;
		float s;
void sort(int a[100],int n)
{ 
    int i,j;
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
 cout<<a[i];
}
void sort(float a[100],int n)
{
   
	for(j=1;j<=n;j++)
	{
	
    for(i=0;i<n-j;i++)
	{
		if(b[i]>b[i+1])
		{
		   s=b[i];
		  b[i]=b[i+1];
		  b[i+1]=s;
	  }  
}
}
 for(i=0;i<n;i++)
 cout<<b[i];
}
};

int main()
{ 
    array ob;
   int a[100],i,n;
   float b[100];
   cout<<"Enter limit of int array:";
   cin>>n;
   cout<<"Enter n numbers:";
   for(i=0;i<n;i++)
     cin>>a[i];
   ob.sort(a,n);
 cout<<"Enter limit of float array:";
   cin>>n;
   cout<<"Enter n numbers:";
   for(i=0;i<n;i++)
     cin>>b[i];
	 ob.sort(b,n);
  
}

