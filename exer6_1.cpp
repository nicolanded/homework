#include<iostream>
using namespace std; 
int main()
{
    int x,y,m,n,min,max,a[10];
	for(x=0;x<10;x++)
	 cin>>a[x];
	max=min=a[0];
	for(x=0;x<10;x++)
	{
	  if(a[x]>max)
	      max=a[x],m=x;
	  if(a[x]<min)
	     min=a[x],n=x;
	}
	y=a[m];
	a[m]=a[n];
	a[n]=y;
	for(x=0;x<10;x++)
	{
	  cout<<a[x]<<" ";
	}
	return 0;
}
