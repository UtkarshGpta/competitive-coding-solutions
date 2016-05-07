#include<iostream>
using namespace std;

int main()
{
	short a[150]={};
	short p(0);
	
	for(int i=0;i<150;i++)
	{
		p=i;
		short q(0);
		cin>>a[i];
		if(a[i]==42)
		break;
	}
	
	for(int i=0;i<=p;i++)
	{
		if(a[i]!=42)
		cout<<a[i]<<endl;
	}
	return 0;
}
