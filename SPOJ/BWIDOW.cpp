#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int r[1000];
int R[1000];

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int T,N;
    int pos(0),big(0);
    cin >> T;
    while (T--) {
        cin >> N;

        for(int i=0;i<N;++i)
        cin >> r[i] >> R[i] ;

        big = r[0];
        pos = 0;
        for(int i = 1 ; i<N ; ++i) {
            if(r[i] > big) {
            pos = i;
            big = r[i];
            }
        }

        bool ok = true;
        for (int i = 0; i < N; i++) {
            if (i == pos) continue;
            if (R[i] >= r[pos]) {
                ok = false;
                break;
            }
        }

        if(ok)
        cout << (pos+1) << endl;
        else cout << -1 << endl;
    }
    return 0;
}
