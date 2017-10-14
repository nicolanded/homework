#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"please enter a ,b:"<<endl;
	cin>>a>>b;
	if(a%b==0)
	  cout<<(float)a/b<<"   "<<a/b<<endl;
	else
	  cout<<(float)a/b<<"   "<<a/b<<"   "<<a%b<<endl;
 } 
