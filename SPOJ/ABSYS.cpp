#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int to_int (string);
string trim(string);

int main() {
	int t;
	cin >> t;
	cin.ignore();
	string str;
	int pos[2] = {0,0} ;
	int num[3] = {0,0,0};
	string dump = "";
	while (t >0 ) {
		getline (cin,dump);
		getline ( cin , str );
		pos [0] = str.find_first_of( "+=" ) ;
		pos [1] = str.find_first_of( "+=" , pos[0]+1 );
		
		num [0] = to_int(trim(str.substr(0,pos[0])));
		str = str.substr(pos[0]+1);
		pos [1] = pos[1]-pos[0]-1;
		num [1] = to_int(trim(str.substr(0,pos[1])));
		str = str.substr(pos[1]+1);
		num [2] = to_int(trim(str));
		
		if(num[0] == -1)
		cout << (num[2]-num[1]) << " + " << num[1] << " = " << num[2] << endl;
		else if(num[1] == -1)
		cout << num[0] << " + " << (num[2]-num[0]) << " = " << num[2] << endl;
		else if(num[2] == -1)
		cout << num[0] << " + " << num[1] << " = " << (num[0]+num[1]) << endl;
		t--;
	}
	return 0;
}

string trim (string x) {
	x.erase(0, x.find_first_not_of(" "));
	x.erase(x.find_last_not_of(' ')+1);
	return x;
}

int to_int(string x) {
	int result;
	if(stringstream(x) >> result && x.find("machula")>x.length()) { return result; }
	else return -1;
}
