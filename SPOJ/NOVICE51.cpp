#include<iostream>
using namespace std;

int main(){
	short t,flag;
	cin >> t;
	unsigned long long N;
	for (short i=1; i<=t; i++){
		cin >> N;
		flag=0;
		if(N == 0) { cout << "Akash\n"; continue; }
		while (1){
			if(N%2 == 1) N--;
			else N=N/2;
			if(N == 0) break;
			if(flag == 0) flag = 1;
			else flag = 0;
		}
		if(flag == 0) cout<<"Aayush\n";
		else cout<<"Akash\n";
	}
	return 0;
}
