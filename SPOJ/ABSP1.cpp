#include<iostream>
using namespace std;

int main() {
	short t;
	cin >> t;
	short i=0,j=0;
	int N;
	for (i=1;i<=t;i++) {
		cin >> N;
		unsigned long long sum(0),a(0);
		int x = 1-N;
		
		for(j=1;j<=N;j++) {
			cin >> a;
			sum+=(x*a);
			x+=2;
		}
		cout << sum << endl;
	}
	return 0;
}
