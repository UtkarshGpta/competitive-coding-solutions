#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	long long t;
	cin >> t;
	string out[t];
	
	for(long long i=1;i<=t;i++){
		queue<long long> candy;
		long long n;
		cin >> n;
		long long counter(0);
		
		while(counter < n){
			long long temp;
			cin >> temp;
			candy.push(temp);
			counter++;
		}
		
		long long sum(0);
		while(!candy.empty()){
			sum=(sum+candy.front())%n;
			candy.pop();
		}
		
		if(sum == 0)
		out[i-1]="YES";
		else
		out[i-1]="NO";
	}
	
	for(long long i=0 ; i<t ; i++)
	cout << out[i] << endl;
	
	return 0;
}
