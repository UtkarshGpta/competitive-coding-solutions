#include<iostream>
using namespace std;

int main(){
	short t;
	cin >> t;
	long long N,y,ans(0),x;
	long long M = 1000000007;
	for( short i=1 ; i<=t; i++){
		cin >> N;
		ans = 0;
		for (x=1;x<=N;x++){
			y = (unsigned)(N/x);
			ans = (unsigned)(ans + (x*y)) %M;
		}
		cout << ans << endl;
	}
	return 0;
}
