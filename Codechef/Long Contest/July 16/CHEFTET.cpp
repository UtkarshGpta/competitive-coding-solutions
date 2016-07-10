#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int N,A[10000],B[10000],i;
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	short T;
	cin >> T;
	while(T--){
		cin >> N;
		ll p(0);
		for(i=0;i<N;++i) { cin>>B[i]; p+=B[i]; }
		for(i=0;i<N;++i) { cin>>A[i]; p+=A[i]; }
		if( p%N == 0 ){
			bool flag = true;
			p/=N;
			for(i=0;i<N;++i){
				if(A[i]==p) continue;
				if( i>0 && i<N-1 && B[i-1]!=0 && B[i]!=0 && A[i]+B[i-1]+B[i]+B[i+1] == p ) { B[i]=0; B[i-1]=0; B[i+1]=0; continue; }
				if( i>0 && B[i-1]!=0 && A[i]+B[i-1] == p ) { B[i-1]=0; continue; }
				if( i>0 && B[i-1]!=0 && B[i]!=0 && A[i]+B[i-1]+B[i] == p ) { B[i-1]=0; B[i]=0; continue; }
				if( i>0 && i<N-1 && B[i-1]!=0 && A[i]+B[i-1]+B[i+1] == p ) { B[i+1]=0; B[i-1]=0; continue; }
				if( B[i]!=0 && A[i]+B[i] == p ) { B[i]=0; continue;}
				if( i<N-1 && A[i]+B[i+1] == p ) { B[i+1]=0; continue; }
				if( i<N-1 && B[i]!=0 && B[i+1]!=0 && A[i]+B[i]+B[i+1] == p ) { B[i]=0; B[i+1] = 0; continue; }
				flag = false;
				break;
			}
			for(i=0;i<N;++i) if(B[i]!=0) flag=false;
			if(flag == true) cout << p << endl;
			else cout << -1 << endl;
		}
		else
		cout << -1 << endl;
	}
	return 0;
}
