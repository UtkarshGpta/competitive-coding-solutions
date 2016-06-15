#include<iostream>
using namespace std;

int t;long N;

int main() {
	cin >> t;
	while(t>0) {
		cin >> N;
		if(N%6==0)
		cout << "Misha" << endl;
		else cout << "Chef" << endl;
		t--;
	}
	return 0;
}
