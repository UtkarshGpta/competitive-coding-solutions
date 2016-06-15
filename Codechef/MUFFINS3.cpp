#include<iostream>
using namespace std;

int t;
long N,A;

int main() {
	cin >> t;
	while(t>0) {
		cin >> N;
		A = (N/2) + 1 ;
		cout << A << endl;
		t--;
	}
	return 0;
}
