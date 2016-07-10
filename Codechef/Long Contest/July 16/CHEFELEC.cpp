#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int T,N,i,ans,x[100000];
string str;
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> T;
	while(T--) {
		cin >> N;
		cin >> str;
		int start(0),end(N-1);
		for(i=0;i<N;++i) cin >> x[i];
		ans = 0;
		if(str[0]=='0')
			for(i=0; ;++i)
				if(str[i]=='1') {start = i; break;}
				else ans += (x[i+1] - x[i]);
		if(str[N-1]=='0')
			for(i=N-1; ;--i)
				if(str[i]=='1') {end = i; break;}
				else ans += (x[i] - x[i-1]);
		int n(-1),l(INT_MAX);
		for(i=start;i<=end;++i){
			if(i==n) { ans+=l; l = INT_MAX; }
			if(i==end) break;
			if(str[i]=='1') {
				if(str[i+1]=='1') continue;
				n = str.find('1',i+1);
				start = i;
			}
			l = min(l, x[i]-x[start]+x[n]-x[i+1] );
		}
		cout << ans << endl;
	}
	return 0;
}
