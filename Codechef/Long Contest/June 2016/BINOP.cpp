#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int t,i;
string A,B;

int main() {
	cin >> t;
	while(t>0) {
		cin >> A >> B;
		int count[2]={0};
		int l = A.length();
		/* To determine whether all are '1' or'0' */
		bool flag = true;
		for(i=0;i<l;i++){
			if(A[i]!=A[0]){
				flag = false;
				break;
			}
		}
		
		if(flag)
			cout << "Unlucky Chef" << endl;
		else {
			for(i=0;i<l;i++) {
				if( A[i]=='0' && B[i]=='1' )
					count[0]++;
				if( A[i]=='1' && B[i]=='0' )
					count[1]++;
			}
			cout << "Lucky Chef" << endl;
			cout << ( max(count[0],count[1]) ) << endl;
		}
		t--;
	}
	return 0;
}
