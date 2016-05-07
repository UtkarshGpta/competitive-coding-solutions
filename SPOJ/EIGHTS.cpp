#include<iostream>
using namespace std;

int main(){
	long long t;
	cin >> t;
	long long *k=new long long[t];
	for(long long i=0 ; i<t ; i++){
		cin >> k[i];
	}
	
	for(long long i=0 ; i<t; i++){
		cout << 192+(250*(k[i]-1)) << endl;
	}
	return 0;
}
