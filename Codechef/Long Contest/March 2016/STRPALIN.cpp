#include<iostream>
#include<string>
using namespace std;

string a,b,s1,s2;

int main() {
	s1 = "";
	s2 = "";
	int t;
	cin >> t;
	while (t>0) {
		cin >> a;
		cin >> b;
		bool flag = false;
		for (int i = 0; i<a.length(); i++) {
			s1 = a[i];
			int pos = b.find_first_of(s1);
			if( pos>-1 && pos<b.length() ) {
				flag = true;
				break;
			}
		}
		if (flag)
		cout << "Yes" << endl;
		else
		cout << "No" << endl;
		t--;
	}
	return 0;
}
