#include<iostream>
using namespace std;
int main()
{
	int i=0,y=2000;
	while(y<=3000)
{
    if(y%400==0||(y%4==0&&y%100!=0))
    {
	  cout<<y<<" ";
     i++;
}
    if(i%10==0)
      cout<<endl;
	y++;
}   
}
