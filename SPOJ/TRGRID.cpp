#include<iostream>
using namespace std;

long m,n;

int main() {
	int test;
	cin >> test;
	while(test>0) {
		cin >> n >> m;
		if (n==m) {
			if(n%2)
			cout << 'R' << endl;
			else
			cout << 'L' << endl;
		} else if(n<m) {
			if(n%2)
			cout << 'R' << endl;
			else
			cout << 'L' << endl;
		} else if(n>m) {
			if(m%2)
			cout << 'D' << endl;
			else
			cout << 'U' << endl;
		}
		test--;
	}
	return 0;
}
