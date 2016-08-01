#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int A[100000] = {};
int N,H,i; 
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N >> H;
	for(i=0;i<N;++i) cin >> A[i];
	
	int curr=0;
	short c;
	bool empty = true;
	while(true) {
		cin >> c;
		if(c==0) break;
		if(c==1 && curr>0) --curr;
		if(c==2 && curr<N-1) ++curr;
		if(c==3 && empty && A[curr]>0){
			empty = false;
			--A[curr];
		}
		if(c==4 && empty==false && A[curr]+1<=H){
			empty = true;
			++A[curr];
		}
	}
	
	for(i=0;i<N;++i) cout << A[i] << " ";
	return 0;
}
