#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double r1,r2,r3,k1,k2,k3,k4,ans;

int main() {
	int test;
	cin >> test;
	while (test>0) {
		cin >> r1 >> r2 >> r3;
		k1=1/r1; k2=1/r2; k3=1/r3;
		k4=k1+k2+k3+2*sqrt((k1*k2)+(k2*k3)+(k3*k1));
		ans=1/k4;
		cout << fixed << setprecision(6) << ans << endl;
		test--;
	}
	return 0;
}
