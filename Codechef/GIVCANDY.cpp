#include<iostream>
#include<cmath>
using namespace std;
long long t;
long long A,B,C,D,diff,answer;

long long gcd(long long a,long long b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> t;
    while(t>0) {
        cin >> A >> B >> C >> D;
        long long HCF = gcd(C,D);
        diff = abs(A-B);
        long long x = diff/HCF;
        answer = min( abs(diff-(HCF*x)), abs(diff-(HCF*(x+1))) );
        cout << answer << endl;
        t--;
    }
    return 0;
}
