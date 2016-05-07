#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int t;
cin >> t;
int *out=new int[t];
for(int i=0;i<t;i++)
out[i]=0;
for(int i=0 ; i < t ; i++ ){
int n;
cin >> n;
int *m=new int[n];
int *f=new int[n];

for(int j=0 ; j<n ; j++)
cin >> m[j];

for(int j=0 ; j<n ; j++)
cin >> f[j];

sort(m,m+n);
sort(f,f+n);

for(int j=0 ;j < n ; j++)
out[i]+=m[j]*f[j];
}

for(int i=0;i<t;i++)
cout << out[i] << endl;
}
