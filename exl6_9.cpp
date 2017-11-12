#include<iostream>
using namespace std;
void fun(int m)
{
    
    int n=0,i; 
	for(i=1;i<=m;i++)
	{
	 if(i%7==0||i%11==0)
	 {
	   n++;
	   cout<<i<<",";
	 }
	 }
	cout<<"一共有"<<n<<"个数";  
}
int main()
{   
    int m;
	cin>>m;
	void fun(int m);
	fun(m);
 } 

