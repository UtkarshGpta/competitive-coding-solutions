/*Top Down with recursion*/

#include<iostream>
#include<cmath>
using namespace std;

int t,n,i;
short inp[5050] = {};

int sum_trian(int row,int column,int parent) {
	int index = ( (row-1)*row ) / 2 + column - 1;
	if( row==n )
		return (parent+inp[index]);
	parent += inp[index];
	return max(sum_trian(row+1,column,parent), sum_trian(row+1,column+1,parent));
}

int main() {
	cin >> t;
	while(t>0) {
		cin >> n;
		for(i=0;i<(n*(n+1)/2);i++)
		cin>>inp[i];
		cout << sum_trian(1,1,0) << endl;
		t--;
	}
	return 0;
}
