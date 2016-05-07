#include <iostream>
using namespace std;

int main(){
		int n(0);
		cin >> n;
		while(n!=0){			
			
			int *per = new int[n];
			int *inv = new int[n];
			int i(0);
			
			for(i=0 ; i<n ; i++)
			cin >> per[i];
			
			for(i=0 ; i<n ; i++)
				inv [per[i]-1] = i+1;
				
			for(i=0;i<n;i++)
			{
				if(per[i]!=inv[i])
					break;
			}
			if(i==n)
				cout << "ambiguous\n";
			else
				cout << "not ambiguous\n";			   
			cin >> n;
		}
		return 0;
}
