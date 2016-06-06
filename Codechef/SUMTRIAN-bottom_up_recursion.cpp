/*Bottom Up with recursion*/

#include<iostream>
#include<cmath>
using namespace std;

int t,n,i,j;
short inp[100][100] = {};

int sum_trian(int row,int column) {
	if( row==n-1 )
		return inp[row][column];
	inp[row][column] += max(sum_trian(row+1,column), sum_trian(row+1,column+1));
	return inp[row][column];
}

int main() {
	cin >> t;
	while(t>0) {
		cin >> n;
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
				cin >> inp[i][j];
		cout << sum_trian(0,0) << endl;
		short inp[100][100] = {};
		t--;
	}
	return 0;
}
