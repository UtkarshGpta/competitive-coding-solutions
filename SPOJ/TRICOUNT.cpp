#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	unsigned long long n,sum(0);
	for (int i=1 ; i<=t ; i++){
		cin >> n;
		if(n%2==0)
		sum = (n*(n+2)*(2*n +1))/ 8;
		else
		sum = (n*(n+2)*(2*n +1) - 1)/ 8;
		cout << sum << endl;
	}
	return 0;
}
