#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int t,k,i,j,current,start,m,answer;
string str;

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while(t--) {
		cin >> str >> k;
		current = 0;
		int cnt[26] = {0};
		for(i=0; i<str.length(); ++i)
			cnt[str[i]-'a']++;
		
		sort(cnt,cnt+26);
		
		for(i=0; i<26; ++i) {
			if(cnt[i]!=0) {
				start = i;
				break;
			}
		}
		if(cnt[25]-cnt[start] <= k){
			cout << 0 << endl;
			continue;
		}
		answer = INT_MAX;
		for(i=start;i<26;++i) {
			current = 0;
			m = cnt[i];
			for(j=start;j<26;++j){
				if(cnt[j]<m) current+=cnt[j];
				else if(cnt[j]>m+k) current += cnt[j] - (m+k) ;
			}
			if(current<answer) answer=current;
		}
		cout << answer << endl;
		for(i=start;i<26;++i) cnt[i]=0;
	}
	return 0;
}
