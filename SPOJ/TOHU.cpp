#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int test;
	double a,b,c,d;
	cin >> test;
	double ans,s;
	while (test>0) {
		cin >> a >> b >> c >> d;
		s = (a+b+c+d) / 2.0;
		ans = sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout << fixed << setprecision(2) << ans << endl;
		test --;
	}
	return 0;
}
