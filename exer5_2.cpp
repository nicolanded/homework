#include<iostream>
using namespace std;
double snap(double n)
{
	double h=0,i,h1=0;;
	for(i=1;i<=n;i++)
	{
	 h1=h1+i;
	 h=h+1/h1;
	}
    return (h);
}
int main()
{
	double h,n;
	double snap(double n);
	cin>>n;
    h=snap(n);
	cout<<h;
}
