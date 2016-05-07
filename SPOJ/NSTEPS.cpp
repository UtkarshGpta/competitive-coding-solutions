#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *x=new int[n];
	int *y=new int[n];
	string *output=new string[n];
	
	for(int i=0;i<n;i++)
	{
		x[i]=0;
		y[i]=0;
		output[i]="";
	}
	
	for(int i=0;i<n;i++)
	cin >> x[i] >> y[i];
	
	for(int i=0 ; i<n ; i++)
	{
		if( (y[i]==x[i]) || (y[i] == (x[i]-2)) )
		{
			int k(0);
			if(x[i]%2 == 0)
			k=x[i]+y[i];
			else
			k=x[i]+y[i]-1;
			
			ostringstream oss;
			oss << k;
			output[i] += oss.str();
		}
		else
		output[i]="No Number";
	}
	
	for(int i=0;i<n;i++)
	cout<<output[i]<<endl;
}
