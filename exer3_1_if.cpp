#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"����һ������"<<endl; 
	cin>>a;
	if(a>=1000)
	  cout<<"1000����";
	else
	  if(a>=100)
	  cout<<"100-999";
	else
	  if(a>=10)
	  cout<<"10-99";
	else
	  cout<<"С��10";
}
