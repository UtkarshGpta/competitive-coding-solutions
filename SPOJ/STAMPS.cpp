#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,n,ans,j;
	long long ray;
	cin >> t;
	for(int i=1 ; i<=t ; i++){
		cin >> ray >> n;
		int *lucy=new int[n];
		
		for(j=0;j<n;j++)
		cin >> lucy[j];
		
		sort(lucy,lucy+n);
		ans=0;
		for(j=n-1;j>=0;j--){
			ray-=lucy[j];
			if( ray <= 0 ){
				ans = n-j;
				break;
			}
		}
		cout << "Scenario #" << i << ":" << endl;
		if(ray > 0)
			cout << "impossible" << endl;
		else
			cout << ans << endl;
		
		cout<< endl;
	}
	return 0;
}
