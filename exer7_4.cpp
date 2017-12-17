#include <iostream>
using namespace std;
#define N 10
int main()
{
	int a[N],*p,*q,f;
	for(int i=0;i<N;i++)
    {
     cin>>a[i];
	}
	p=a;
	q=a;
	for(int i=1;i<N;i++)
	{
		q++;
	}
	for(;p<q;)
	 {
	 	f=*p;
	 	*p=*q;
	 	*q=f;
	 	p++;
	 	q--;
	 }
	for(int i=0;i<N;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
 } 
