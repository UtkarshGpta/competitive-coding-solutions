#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

long ans=0;
int i=1;
int temp(0);
do{
temp=int(n/i)-(i-1);
i++;
if(temp>0){
ans+=temp;}
}while(temp>0);
cout << ans << endl;
return 0;
}
