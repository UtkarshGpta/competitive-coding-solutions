#include<iostream>
using namespace std;

long long gcd (long long, long long);

int main() {
    long t;
    long long A,B,C,GCD;
    cin >> t;
    for(long i = 1; i<=t ; i++) {
        cin >> A >> B >> C ;
        GCD = gcd(A,B);
        if( C%GCD == 0) {
            cout << "Case " << i << ": " << "Yes" << endl;
        } else {
            cout << "Case " << i << ": " << "No" << endl;
        }
    }
    return 0;
}

long long gcd(long long a, long long b) {
    return ( b==0 ? a : gcd(b, a%b) );
}
