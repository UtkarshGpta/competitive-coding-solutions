#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int T,N,K,i,A[101];
int res[101]={0};
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> T;
	while(T--) {
		cin >> N >> K;
		for(i=1;i<=N;++i)
		cin >> A[i];
		
		for(i=1;i<=N;++i){
			if(A[i]==i) res[i]=-1;
			else if(res[A[i]]!=-1)
				++res[A[i]];
		}
		int ans = 0;
		for(i=1;i<=N;++i)
			if(res[i]>=K) ++ans;
		cout << ans << endl;
		
		for(i=0;i<=N;++i) res[i]=0;
	}
	return 0;
}
