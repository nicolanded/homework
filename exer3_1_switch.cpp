#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	cin>>n;
    while(n!=0)
    {     
      n/=10; 
      i++;  
    }
    switch(i)
    {
	 case 0:
   	 case 1:cout<<"小于10\n";break;
	 case 2:cout<<"10~99\n";break;
	 case 3:cout<<"100~999\n";break; 
     default:cout<<"大于1000\n";
    }
}
