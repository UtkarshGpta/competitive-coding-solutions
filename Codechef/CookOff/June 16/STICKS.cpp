#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n,i,j,A[1000] = {0};
	cin >> t;
	while(t>0) {
		cin >> n;
		for(i=0;i<n;i++)
		cin >> A[i];
		if(n<4){
			cout << -1 << endl;
			t--;
			continue;
		}
		sort(A,A+n);
		int l(-1),b(-1); /* Length and Breadth */

		for(i=n-1;i>=1;i--)
			if(A[i]==A[i-1]) { l=A[i]; break; }
				
		if(l!=-1 && i>=3)
			for(j=i-2;j>=1;j--)
				if(A[j]==A[j-1]) { b=A[j]; break; }
		
		if( l==-1 || b==-1 ) cout << -1 << endl;
		else cout << l*b << endl;
		t--;
	}
	return 0;
}
