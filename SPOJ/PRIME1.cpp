#include<iostream>
#include<cmath>
using namespace std;

void print_prime(long,long);
bool is_prime(long);

int main()
{
	short t;
	long *m=new long[t];
	long *n=new long[t];
	
	cin>>t;

	for(int i=0;i<t;i++)
	{
		cin>>m[i]>>n[i];
	}
	
	for(int i=0;i<t;i++)
	{
		print_prime(m[i],n[i]);
		cout<<endl;
	}
	return 0;
}

void print_prime(long x,long y)
{
	for(long i=x;i<=y;i++)
	{
		if(is_prime(i)==true)
		cout<<i<<endl;
	}
}

bool is_prime(long x)
{
	bool ret=true;
	if(x==1)
	ret=false;
	else
	if(x==2)
	ret=true;
	else
	if(x==3)
	ret=true;
	else
	if(x==5)
	ret=true;
	else
	if(x==7)
	ret=true;
	else
	if(x%2==0)
	ret=false;
	else
	if(x%3==0)
	ret=false;
	else
	if(x%5==0)
	ret=false;
	else
	if(x%7==0)
	ret=false;
	else
	{
		for(long i=3; i*i <= x ; i=i+2)
		if(x%i==0)
		{
			ret=false;
			break;
		}
	}
	return ret;
}
