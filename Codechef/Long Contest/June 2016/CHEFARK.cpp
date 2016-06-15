#include<iostream>
#define ll long long
using namespace std;

int MOD = 1000000007;
int t,N,K,i,A,zeros;
ll ans = 0, fact[100001];

/* To calculate (base^exp)%MOD */
ll fast_exp(ll base, ll exp){
	ll res=1;
	while(exp|0){
		if(exp&1) res = (res*base)%MOD;						/*checks for exp%2==1*/
		base = (base*base)%MOD;
		exp = exp>>1 ;
	}
	return res%MOD;
}

/* To find a^-1 which is equal to a^(M-2)*/
ll InverseEuler(ll n){
	return fast_exp(n,MOD-2);
}

ll C(int n, int r) {
    return (fact[n]*((InverseEuler(fact[r]) * InverseEuler(fact[n-r])) % MOD )) % MOD;
}

int main() {
	cin >> t;
	
	fact[0] = 1;
	for(i=1;i<=100000;i++)
		fact[i] = (fact[i-1]*i)%MOD;
	
	while(t|0){									/* t>0 */
		cin >> N >> K;
		ans=0,zeros=0;
		for(i=0;i<N;i++){
			cin >> A;
			if(!A|0) zeros++;
		}
		
		if(zeros|0){
			N -= zeros;
			if(K<=N)
				for(i=K;i>=0;i--)
					ans = ( ans%MOD + C(N,i) ) % MOD;
			else ans = fast_exp(2,N);
		}
		else if(K>=N)
			ans = fast_exp(2,N-1);
		else{
			ll num(1);
			if(K&1){			
				for(i=1;i<=K;i++){
					num = (num*(N-i+1)) % MOD;
					if(i&1)	ans = ( (ans%MOD) + ( num * InverseEuler(fact[i]) ) % MOD ) % MOD;
				}
			}
			else {
				ans = 1;
				for(i=1;i<=K;i++){
					num = (num*(N-i+1)) % MOD;
					if(i%2 == 0) ans = ( (ans%MOD) + ( num * InverseEuler(fact[i]) ) % MOD ) % MOD;
				}
			}
		}
		cout << ans << endl;
		t--;
	}
	return 0;
}
