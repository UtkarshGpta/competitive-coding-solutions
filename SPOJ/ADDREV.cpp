#include<iostream>
#include<cmath>
using namespace std;

int rev_digit(int);

int main()
{
	int t;
	cin>>t;
	int *p=new int[t];
	int *q=new int[t];
	
	for(int i=0;i<t;i++)
	cin>>p[i]>>q[i];
	
	for(int i=0;i<t;i++)
	{
	int y=rev_digit(p[i])+rev_digit(q[i]);
	cout<<rev_digit(y)<<endl;
	}
	return 0;
}

int rev_digit(int x)
{
	int a(0);
	int t=x;
	int rev(0);
	
	while(t>0)
	{
		a++;
		t=t/10;
	}
	a--;
	
	t=x;
	int c(0);
	while(t>0)
	{
		c=(int)pow(10,a);
		rev=rev+(c*(t%10));
		a--;
		t=t/10;
	}
	return rev;
}
