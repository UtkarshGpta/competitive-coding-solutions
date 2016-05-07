#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	short t;
	cin >> t;
	long double s;
	for (short i=1 ;i<=t;i++){
		cin >> s;
		long double ans = 1- 1/(3*sqrt(s/2)) ;
		cout << setprecision(6) << fixed << ans << endl;
	}
	return 0;
}
