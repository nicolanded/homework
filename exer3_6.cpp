#include<iostream>
using namespace std;
int main()
{
	int k;
	float r,s,p,pi;
	pi=3.14159;
	cout<<"enter r , k:"<<endl;
	cin>>r>>k;
	s=pi*r*r;
	p=2*pi*r;
    switch(k)
    {
	  case 1:cout<<s;break;
	  case 2:cout<<p;break;
	  case 3:cout<<s<<"   "<<p;break;
	  default:cout<<"please enter k 1~3";
    }
}

