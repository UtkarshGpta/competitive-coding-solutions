#include<iostream>
using namespace std;

int main()
{
	short t;
	cin>>t;
	short *c=new short[t];
	short *k=new short[t];
	short *w=new short[t];
	
	for(int i=0;i<t;i++)
	{
		cin>>c[i];
		cin>>k[i];
		cin>>w[i];
	}
	
	for(int i=0;i<t;i++)
	{
		if((c[i]*w[i])<=k[i])
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	
	return 0;
	
}
