#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int x)
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
		for(int i=3; i*i <= x ; i=i+2)
		if(x%i==0)
		{
			ret=false;
			break;
		}
	}
	return ret;
}

int main()
{
	short t;
	cin >> t;
	int n(0),p(0),c,j,x(0);
	for(short i=1;i<=t;i++)
	{
		cin >> n;
		long long ans (1);
		long long M = pow(10,9)+7.0;
		for(j=2;j<=n;j++)
		{
			p = 0;
			c = 1;
			if(is_prime(j)==true){
				x = int ( n / int(pow(j,c)) );
				while (x > 0) {
					c++;
					p+=x;
					x = int ( n / int(pow(j,c)) );
				}
				ans = ( ans * (p+1) ) % M;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
