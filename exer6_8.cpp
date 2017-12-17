#include<iostream>
using namespace std;
#include<stdio.h>
#define N 20
int main()
{
	char a[N],b[N],c[N];
	int i;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	 
    for(int x=0;b[x]!='\0';x++)
	{
		c[i]=b[x];
		i++;
	}
	puts(c);
}
