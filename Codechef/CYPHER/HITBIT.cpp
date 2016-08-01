#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int T,L,R,K;
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> T;
	while(T--) {
		cin >> L >> R >> K;
		long sum = 0;
		for(int i = L; i<=R; ++i){
			int x = i>>(K-1);
			if( x&1==1 )
				sum+=i;
		}
		cout << sum << endl;
	}
	return 0;
}
