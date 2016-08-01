#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
typedef long long ll;
 
inline int sum_of_digits(int n){
    if (n<10) return n;
    return n%10 + sum_of_digits(n/10);
}
	
int N,p,q,i;
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	if(N%3){
		cout << 0 << endl;
		return 0;
	}
	int count(0);
	if(N<=90) i=1;
	else i = N-90;
	for(;i<=N;++i){
		p = sum_of_digits(i);
		q = sum_of_digits(p);
		if( (N-i) == (p+q) ) ++count;
	}
	cout << count << endl;
	return 0;
}
