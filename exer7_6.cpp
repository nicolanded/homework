#include<iostream>
#include<stdio.h>
using namespace std;
#define N 20
int main()
{
	char a[N],b[N],c[N],*p,*q,*f;
	int n;
	cout<<"input char a[]"<<endl;
	gets(a);
	cout<<"input char b[]"<<endl;
	gets(b);
	cout<<"move char b to:"<<endl;
	cin>>n;
	p=a;
	q=b;
	f=c;
    for(int i=0;i<n;i++)
    {
    	*f=*p;
    	p++;
     if(*p=='\0')
       *p=' ';
		f++;
	}
	for(;*q!='\0';)
	{
		*f=*q;
		q++;f++;
	}
	for(;*p!='\0';)
	{
		*f=*p;
		p++;f++;
	}
	puts(c);
}
