#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"please enter i:";
	cin>>i;
	while(i!=1)
    {
      if(i%2==0)
	  i/=2;
	else
	  i=3*i+1;
	cout<<i<<" ";
	  
	}
 } 
