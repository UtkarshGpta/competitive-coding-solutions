#include<iostream>
#include<cmath>
#include<iomanip>
#define ll long long
#define endl '\n'
using namespace std;
 
int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	ll H,S;
	double b,h;
	cin >> t;
	while (t|0){
		cin >> H >> S;
		double x = 4*double(S) / double(H*H);
		if(x>1) cout << -1 << endl;
		else {
			double alpha = asin (x) / 2;
			b = H*cos(alpha);
			h = H*sin(alpha);
			if(b<=h)
			cout << fixed << setprecision(6) << b << " " << h << " " << double(H) << endl;
			else
			cout << fixed << setprecision(6) << h << " " << b << " " << double(H) << endl; 
		}
		t--;
	}
	return 0;
}
