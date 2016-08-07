#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int T,N,i;
ll M,F,S;
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> T;
	while(T--) {
		cin >> N;
		cin >> M >> F;
		int p(0),q(0);
		double accuracy=0.0;
		for(i=0;i<N;++i){
			cin >> S;
			if (S>0)
				if(S%M==0) ++p;
				else if(S%F==0) ++q;
		}
		
		accuracy = double(p+q) / double(N);
		if(accuracy>=0.7) {
			cout << "Yes" << endl;
			if(p>q)
				cout << "Multan" << endl;
			else if(p<q)
				cout << "Fultan" << endl;
			else
				cout << "Both" << endl;
		}
		else
		cout << "No" << endl;
	}
	return 0;
}
