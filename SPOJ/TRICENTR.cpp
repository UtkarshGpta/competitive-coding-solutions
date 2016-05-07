#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int test;
long double a,b,c,ga,gb,gc,s,area,R,OH;

int main() {
	cin >> test;
	while (test>0) {
		cin >> a >> ga >> gb >> gc ;
		b = a * (ga/gb) ;
		c = a * (ga/gc) ;
		s = (a+b+c) / 2 ;
		R = ( (a*b*c) / ( 4* ( sqrt( s * (a+b-s) * (a+c-s) * (b+c-s) ) ) ) ) ;
		OH = sqrt ( ( 9 * pow(R,2) ) - ( pow(a,2) + pow(b,2) + pow(c,2) ) ) ;
		area = sqrt( s * (s-a) * (s-b) * (s-c) ) ;
		cout << fixed << setprecision(3) << area << " " ;
		cout << fixed << setprecision(3) << ( (2.0/3.0) * OH ) << endl ;
		test --;
	}
	return 0;
}
