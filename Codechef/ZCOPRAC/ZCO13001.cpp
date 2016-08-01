#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int str[200000] = {0};
int N,H,i; 

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N;
	for(i=0;i<N;++i) cin >> str[i];
	sort(str,str+N);
	
	ll left(0),right(0);
	for(i=0;i<N;++i){
		right -= (N-i-1)*str[i];
		left += i*str[i];
	}
	cout << right+left << endl;
	return 0;
}
