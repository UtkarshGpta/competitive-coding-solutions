#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <cmath>
using namespace std;

void base_convert (int,int);

vector<int> num_base;

int main() {
    int p;
    cin >> p;
    int i,x,y,n,answer,r1,r2,c,r3,l1,l2;

    while (p>0) {
        cin >> i >> n >> x >> y;
        num_base.clear();

        if (x!=0)
        base_convert(n,x);
        else num_base.push_back(0);
        vector<int> X(num_base);
        num_base.clear();

        if (y!=0)
        base_convert(n,y);
        else num_base.push_back(0);
        vector<int> Y(num_base);
        num_base.clear();

        answer = 0;
        c = 0;
        l1 = X.size()-1;
        l2 = Y.size()-1;
        while ( l1>=0 || l2>=0 ) {

            r1 = (l1>=0) ? X[l1] : 0;
            r2 = (l2>=0) ? Y[l2] : 0;

            l1--;
            l2--;

            r3 = (r1+r2)%n;
            answer += pow(n,c++) * r3 ;
        }
        cout << i << " " << answer << endl;
        p--;
    }
    return 0;
}

void base_convert (int n,int num) {
    if(num > 0) {
        int rem = num % n;
        num /= n;
        base_convert (n,num);
        num_base.push_back(rem);
    }
}
