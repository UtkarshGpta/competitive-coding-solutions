#include<iostream>
using namespace std;

long long gcd (long long, long long);

int main() {
    int t;
    long long A,B,GCD;
    cin >> t;
    while (t>0) {
        cin >> A >> B ;
        GCD = gcd(A,B);
        if(GCD == 1) {
            cout << B << " " << A << endl;
        } else {
            cout << (B/GCD) << " " << (A/GCD) << endl;
        }
        t--;
    }
    return 0;
}

long long gcd(long long a, long long b) {
    return ( b==0 ? a : gcd(b, a%b) );
}
