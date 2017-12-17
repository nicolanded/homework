#include<iostream>
using namespace std;
int main()
{
	int a[20],i;
	a[0]=a[1]=1;
	for(i=2;i<20;i++)
		a[i]=a[i-1]+a[i-2];
	for(i=0;i<20;i++)
	{
	 cout<<a[i]<<' ';
	    if((i+1)%5==0)
		 cout<<endl;	
	}
}
