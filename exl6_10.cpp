#include<iostream>
using namespace std;
float fun(double h)
{
	int m;
	float n;
	m=(h*1000+5)/10;
	n=(float)m/100; 
	return (n);
}
int main()
{
	double h;
	float fun(double h);
	cin>>h;
	cout<<fun(h);
}
