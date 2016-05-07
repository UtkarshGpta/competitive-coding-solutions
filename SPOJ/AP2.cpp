#include<iostream>
using namespace std;

int main(){
int t;
cin >> t;
long long *x=new long long[t];
long long *y=new long long[t];
long long *sum=new long long[t];
long long *d=new long long[t];
long long *n=new long long[t];
int *a=new int[t];

for(int i=0;i<t;i++)
cin >> x[i] >> y[i] >> sum[i];

for(int i=0;i<t;i++){
n[i]=int((2*sum[i])/(x[i]+y[i]));
d[i]=int((y[i]-x[i])/(n[i]-5));
a[i]=x[i]-(2*d[i]);
}

for(int i=0;i<t;i++){
cout << n[i] <<endl;
for(int j=0;j<n[i];j++){
cout << (a[i]+(j*d[i]));
if(j!=(n[i]-1))
cout << " ";
}
if(i!=(t-1))
cout << endl;
}

return 0;
}
