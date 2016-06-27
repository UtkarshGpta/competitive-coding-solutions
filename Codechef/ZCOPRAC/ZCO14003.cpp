#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<climits>
#define ll long long
using namespace std;

ll arr[500001] = {LLONG_MAX};

int main() {
	int N;
	ll rev;
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	scanf("%lld", &arr[i]);
	arr[0]=0;
	sort(arr+1,arr+N+1);
	ll answer=0;
	for(int j=1;j<=N;j++){
		rev = (N-j+1)*arr[j] ;
		if( rev > answer ) answer = rev;
	}
	cout << answer << endl;
	return 0;
}
