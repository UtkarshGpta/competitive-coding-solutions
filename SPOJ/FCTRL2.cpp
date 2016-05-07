// For tutorial, visit : http://www.codechef.com/wiki/tutorial-small-factorials
#include<iostream>
using namespace std;

void fctrl(int);

int main()
{
	short t;
	cin>>t;
	
	int *x=new int[t];
	
	for(short i=0;i<t;i++)
	cin>>x[i];
	
	for(short i=0;i<t;i++)
	fctrl(x[i]);
	
	return 0;
}

void fctrl(int p)
{
	short a[200]={};						
	short n=0;								//number of digits in array a
	short dummy=p;
	
	while(p>0)
	{
		a[n++]=p%10;
		p/=10;
	}
	
	for(short i=1;i<dummy;i++)
	{
		int temp=0;
		int x=0;
		
		for(short j=0;j<n;j++)
		{
			x=a[j]*i+temp;
			a[j]=x%10;
			temp=x/10;
		}
		
		while(temp>0)
		{
			a[n++]=temp%10;
			temp/=10;
		}
	}
	
	for(short i=n-1;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<endl;
}
