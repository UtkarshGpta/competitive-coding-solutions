#include<iostream>
#include<cmath>
using namespace std;

int answer(int);
int main()
{
	int t;
	cin>>t;
	int *inp=new int[t];
	for(int i=0;i<t;i++)
	cin>>inp[i];
	
	for(int i=0;i<t;i++)
	{
		cout<<answer(inp[i])<<endl;
	}
	return 0;
}

int answer(int x)
{
	int sum(0);
	int t(1);
	while((x/int(pow(5,t)))>0)
	{
		sum=sum+(x/int(pow(5,t)));
		t++;		
	}
	return sum;
}
