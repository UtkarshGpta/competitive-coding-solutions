#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define MOD 786433
typedef long long ll;

inline int scan_d() { int ip = getchar_unlocked(), ret = 0, flag = 1;for (;ip<'0' || ip>'9';ip = getchar_unlocked())if (ip == '-') { flag = -1;ip = getchar_unlocked();break; }for (;ip >= '0'&&ip <= '9';ip = getchar_unlocked())ret = ret * 10 + ip - '0';return flag*ret; }

ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp|0) {
       if(exp&1)
	   res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp = exp>>1;
    }
    return res;
}

int a[250001];
int N,Q;
ll ans,x,X;
int main(){
	N = scan_d();
	for(int i=0;i<=N;++i) a[i] = scan_d();
	Q = scan_d();
	while(Q--) {
		ans = 0; X = 1;
		x = scan_d();
		for(int i=0;i<=N;i++){
			ans = ( ans + (a[i]*fast_exp(x,i))%MOD ) % MOD;
		}
		cout << ans << endl;
	}
	return 0;
}
