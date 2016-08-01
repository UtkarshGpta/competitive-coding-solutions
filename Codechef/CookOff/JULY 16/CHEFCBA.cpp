#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
typedef long long ll;
 
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a*b == c*d) cout << "Possible" << endl;
	else if(a*c == b*d) cout << "Possible" << endl;
	else if(a*d == b*c) cout << "Possible" << endl;
	else cout << "Impossible" << endl;
	return 0;
}
