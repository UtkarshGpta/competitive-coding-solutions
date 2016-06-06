/*Codechef EASY Bottom Up Approach without Recursion*/

#include<iostream>
using namespace std;

int t,n,i,j;
short inp[100][100] = {0};

int main() {
	cin >> t;
	while(t>0) {
		cin >> n;
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
				cin >> inp[i][j];
		
		for(i=n-2;i>=0;i--) for(j=i;j>=0;j--) {
			if( inp[i+1][j+1] > inp[i+1][j] ) inp[i][j]+=inp[i+1][j+1];
			else inp[i][j]+=inp[i+1][j];
		}
		cout << inp[0][0] << endl;
		short inp[100][100] = {0};
		t--;
	}
	return 0;
}
