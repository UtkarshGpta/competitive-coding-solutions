/* n! + 2^n - n*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	int temp=t-1;
	unsigned long long a(1);
	while(temp>1){
	a*=temp;
	temp--;
	}
	
	unsigned long long b=pow(2,t);
	
	cout<<((t*(a-1))+b)<<endl;
	return 0;
}
