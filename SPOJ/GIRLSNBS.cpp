#include<iostream>
using namespace std;

int main() {
	int g,b;
	int x,y;
	cin >> g >> b;
	while (g!=-1 && b!=-1) {
		if (g!=0 && b!=0){
			x = (g<b) ? g : b ;
			y = (g<b) ? b : g ;
			if ( y%(x+1) == 0 )
			cout << y/(x+1) << endl;
			else
			cout << (y/(x+1)) + 1 << endl;
		} else {
			if( g==0 && b==0 ) cout << 0 << endl;
			else if( g==0 ) cout << b << endl;
			else if( b==0 ) cout << g << endl;
		}
		cin >> g >> b;
	}
	return 0;
}
