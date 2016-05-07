#include<iostream>
using namespace std;

int main() {
	short t;
	cin >> t;
	while (t>0) {
		short l(0),c(0);
		cin >> l >> c;
		for ( short i=0; i<l ; i++ ) {
			char a = (i%2) ? '*' : '.' ;
			for ( short j=0; j<c ; j++ ) {
				char x = a;
				char y = (x == '*') ? '.' : '*' ;
				cout << ( (j%2) ? x : y); 
			}
			cout << endl;
		}
		t--;
	}
	return 0;
}
