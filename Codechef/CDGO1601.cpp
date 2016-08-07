#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int N,T;
double L,B;
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> T;
	while(T--) {
		cin >> N;
		cin >> L >> B;
		bool flag = true;
		while(N--){
			if(L==B) flag = false;
			if(L>B) L-=B;
			else B-=L;
		}
		if(flag)
		cout << "Yes " << (L*B) << endl;
		else
		cout << "No" << endl;
	}
	return 0;
}
