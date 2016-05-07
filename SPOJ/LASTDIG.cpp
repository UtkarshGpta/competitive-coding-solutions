#include<iostream>
using namespace std;

int main()
{
	short t;
	cin >> t;
	long long *a = new long long[t];
	long long *b = new long long[t];
	
	for (int i=0 ; i< t ; i++)
	cin >> a[i] >> b[i];
	for (int i=0 ; i<t ; i++){
	    if(a[i] == 0 && b[i] == 0)    return 0;
	    int ans = 1;
	    while(b[i] > 0)
	    {
	        if(b[i]%2 == 1)
	            ans *= a[i];
	        a[i] *= a[i];
	        a[i] %= 10;
	        ans %= 10;
	        b[i] /= 2;
	        if(ans == 0)    break;
	    }
	    cout << ans << endl;
	}
    return 0;
}
