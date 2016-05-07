#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n,x;
	cin >> t;
	while (t>0) {
		cin >> n;
		int *a = new int[n];
		for (int i =0 ; i<n ; i++) {a[i]=0;}
		for (int i=0; i<n ; i++) {
			cin >> x;
			if ( a[x] == 0)
				a[x] = 1;
			else
				a[n-x-1] = 1;
		}
		sort(a, a+n);
		if(a[0] == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		t--;
	}
}

/* In order for a sequence to be a genie sequence, the numbers given as input shall either describe the number of elements 
before it or number of elements after it. So for checking this we create an array a[] of size n and initialize all its 
elements with 0. Now, we take the input for genie sequence, let's say c. For every input c, we change a[c] = 1 and if 
its already 1 we change a[n-1-c] =1. This way we will come to know the index  whose  number of elements before or after
 it has been given or not. For that index a[i] = 0.		*/
