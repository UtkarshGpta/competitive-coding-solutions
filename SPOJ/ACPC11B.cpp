#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t,i(0),j(0);
	cin >> t;
	while(t--){
		int a,b;
		
		cin >> a;
		double *m1=new double[a];
		for(i=0 ; i<a ; i++)
		cin >> m1[i];
		
		cin >> b;
		double *m2=new double[b];
		for(i=0 ; i<b ; i++)
		cin >> m2[i];
		
		double min(999999999);
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				if(abs(m1[i]-m2[j]) < min)
				min=abs(m1[i]-m2[j]);
			}
		}
		cout << min << endl;
	}
	return 0;
}
