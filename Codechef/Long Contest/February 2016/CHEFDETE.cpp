#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long arr [100000];
long index = 0;

void changeVal(long);
int main() {
	long N;
	cin >> N;
	for (long i = 0; i<N; i++)
		cin >> arr[i];
	
	long *p = find(arr,arr+N, 0);
	*p = -1;
	
	for (long i = 0; i<N; i++) {
		if( arr[i] == -1 )
			continue;
		else {
			index = arr[i]-1;
			changeVal(index);
		}
	}
	
	vector<int> list;
	for (long i = 0; i<N; i++)
		if(arr[i] != -1)
		list.push_back(i+1);
	
	sort(list.begin(), list.end());
	
	for (long i=0; i<list.size(); i++)
    	cout << list[i] << " ";
	return 0;
}

void changeVal(long i) {
	while( arr[i] !=-1 ) {
		index = arr[i]-1;
		arr[i] = -1;
		changeVal(index);
	}
}
