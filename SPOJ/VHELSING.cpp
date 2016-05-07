#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int N;
	double r;
	cin >> r >> N;
	while ( r!=0 && N!=0 ) {
		double den = sin ( M_PI / (2.0 * N) ) ;
		cout << fixed << setprecision(2) << (r / den ) << endl;
		cin >> r >> N ;
	}
	return 0;
}
