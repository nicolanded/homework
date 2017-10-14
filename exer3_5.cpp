#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,s,h;
	cout<<"enter a,b,c:"<<endl;
	cin>>a>>b>>c;
	s=((a+b+c)/2);
	h=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"area="<<h<<endl;
	
}
