#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

int t,i;
ll power[19] = {};
short arr[] = {8,0,2,4,6,8};

void magical(int d, ll K){
	if (d==0) return;
	int x = ceil( double(K) /power[d-1] );
	cout <<  arr[x] ;
	magical(d-1,K%power[d-1]);
}

int main() {
	cin >> t;
	power[0]=1;
	for(i=1;i<=18;i++)
	power[i] = power[i-1]*5;
	ll K;
	while(t|0){
		cin >> K;
		if(K==1){
			cout << 0 << endl;
			t--;
			continue;
		}
		int d = ceil( log(K)/log(5) );
		K -= power[d-1];
		ll x = ceil( double(K) / power[d-1] );
		cout << 2*x ;
		magical(d-1,K%power[d-1]);
		cout << endl;
		t--;
	}
	return 0;
}
