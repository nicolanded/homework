#include<iostream>
using namespace std; 
#define N 10
int main()
{
	int a[N],*min,*max,*p,f;
	min=max=p=a;
	for(int i=0;i<N;i++)
    {
     cin>>a[i];
	}
	for(int i=0;i<N;i++)
	{
	 if(*(p+i)>*max)
	 {
	   max=(p+i);
	 }
	 if(*(p+i)<*min)
	 {
	    min=(p+i);
     }  
	}
    f=*min;
    *min=*max;
    *max=f;
    for(int i=0;i<N;i++)
	{
		cout<<a[i]<<" ";
	}
 } 
 
