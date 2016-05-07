#include<iostream>
#include<cmath>
using namespace std;

int test,i,k;
long long n,start,terms,p;

int main() {
	cin >> test;
	while (test>0) {	
		cin >> n >> k;
		
		long long *band = new long long[k];
		
		terms = 0.5*(sqrt(1+8*n)-1);
		terms /= k;
		
		for (i=1; i<=k; i++) {
			band[i-1] = (2*i+(terms-1)*k)*terms*0.5;
		}
		
		terms *= k;
		
		n -= terms * (terms+1) * 0.5;
		start = terms+1;
		
		for(i=0;i<k && n>0 ;i++){
			if(start<=n){
				band[i]+=start;
				n-=start++;
			} else {
				band[i]+=n;
				n=0;
			}
		}
		
		for(i=0;i<k;i++)
		cout << band[i] << " ";
		cout << endl;
		
		delete band;
		test -- ;
	}
	return 0;
}
