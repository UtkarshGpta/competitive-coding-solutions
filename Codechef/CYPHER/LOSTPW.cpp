#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int cnt[123]={0},i;

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str="";
	while(true) {
		cin >> str;
		bool flag = true;
		
		for(i=0;i<str.length();++i) {
			if( cnt[str[i]] == 0 ){
				++cnt[str[i]];
				continue;
			}
			else{
				cout << "Invalid" << endl;
				flag = false;
				break;
			}
		}
		
		if(flag) {
			cout << "Valid" << endl;
			break;
		}
		
		for(i=48;i<=123;++i){
			if(i==57) i=96;
			cnt[i] = 0;
		}
	}
	return 0;
}
