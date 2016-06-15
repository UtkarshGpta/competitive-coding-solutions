#include<iostream>
#include<algorithm>
using namespace std;

int N,Q,i;
long t,arr[100000] = {0};

int main() {
	cin >> N >> Q;
	for(i=0;i<N;i++)
	cin >> arr[i];
	sort(arr,arr+N);
	while(Q>0) {
		cin >> t;
		if( t<arr[0] || t>arr[N-1] )
		cout << "No" << endl;
		else cout << "Yes" << endl;
		Q--;
	}
	return 0;
}
