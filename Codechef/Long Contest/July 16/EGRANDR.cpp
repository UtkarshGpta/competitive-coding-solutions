#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

short A[100001];
int N,T;
long double GPA(0.0);
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> T;
	while(T--){
		bool fail_flag = false;
		bool top_flag = false;
		cin >> N;
		GPA = 0.0;
		
		for(int i=1;i<=N;++i) cin >> A[i];
		sort(A+1,A+N+1);
		for(int i=1;i<=N;++i){
			GPA+=( (double)A[i]/(double)N );
			if(A[i]==5) top_flag = true;
			if(A[i]==2) { fail_flag = true; break; }
		}
		if( GPA>=4.0 && top_flag && !fail_flag)
		cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
