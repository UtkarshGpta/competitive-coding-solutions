#include<iostream>
using namespace std;

int main() {
	short t;
	cin >> t;
	while (t>0) {
		short l(0),c(0);
		cin >> l >> c;
		for ( short i=0; i<l ; i++ ) {
			if( i==0 || i==(l-1) ) { for(short j=0 ; j<c ; j++){cout << '*';}}
			else {
				cout << '*';
				if(c!=1){for ( short j=1; j<c-1 ; j++ ) {cout << '.';}
				cout << '*';}
			}
			cout << endl;
		}
		if ( t!=1 )
		cout << endl;
		t--;
	}
	return 0;
}
