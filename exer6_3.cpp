#include<iostream>
using namespace std;
#define N 4
int fun(int a[N][N]);
int main()
{
	int a[N][N],i,j;
	for(i=0;i<N;i++)
	  for( j=0;j<N;j++)
	   cin>>a[i][j];
	cout<<fun(a)<<endl;
    for( i=0;i<N;i++)
	{
	    for( j=0;j<N;j++)
	     if(i<j)
	      a[i][j]=a[i][j]+1;
	    else
	     if(i>j)
	      a[i][j]=a[i][j]-1;
    }
    for(int i=0;i<N;i++)
	{
	  for(int j=0;j<N;j++)
      {
	   cout<<a[i][j]<<' ';
	  } 
	  cout<<endl; 
    }
	 
}
int fun(int a[N][N])
{
	int sum=0;
	for(int i=0;i<N;i++)
	  for(int j=0;j<N;j++)
      
	    if(i==j)
         sum+=a[i][j];
      return sum;
}




