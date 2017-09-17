#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"输入一个整数"<<endl; 
	cin>>a;
	if(a>=1000)
	  cout<<"1000以上";
	else
	  if(a>=100)
	  cout<<"100-999";
	else
	  if(a>=10)
	  cout<<"10-99";
	else
	  cout<<"小于10";
}
