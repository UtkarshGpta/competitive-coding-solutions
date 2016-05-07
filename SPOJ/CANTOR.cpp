#include<iostream>
#include<cmath>
using namespace std;

int main(){
	short t;
	cin >> t;
	
	long long *in = new long long[t];
	long long *num = new long long[t];
	long long *den = new long long[t];
	
	for( short i=0 ; i<t ; i++)
	cin >> in[i];
	
	for(short i=0 ; i<t; i++){
		long diag = ceil((sqrt(8*in[i]+1) -1 )/2.0);
		long long endPoint = (diag * (diag+1)) / 2;
		long long diff = diag - endPoint + in[i] -1 ;
		if( diag % 2 == 0 ){
			num [i] = 1+diff;
			den [i] = diag-diff;
		}
		else{
			num [i] = diag-diff;
			den [i] = 1+diff;
		}
	}
	
	for(short i=0 ; i<t ; i++)
	cout << "TERM " << in[i] << " IS " << num[i] << "/" << den[i] << endl;
	
	return 0;
}
