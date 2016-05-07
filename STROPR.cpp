#include<stdio.h>
using namespace std;
 
const long MOD = 1000000000+7;
long x,N,i(0),ans(0);
long long M,j(0);
long long arr[100000];
long coeff[100000] = {};

int main(){
	int T;
	scanf("%i",&T);
	while (T>0) {
		scanf("%i %i %i",&N,&x,&M);
		
		for (i=0; i<N; i++)
		scanf("%i",&arr[i]);
		
		for(i=x; i--;)
		coeff[i] = 0;
		
		coeff[0] = 1;
		for(j=1; j<=M; j++)
			for(i=1; i<x; i++)
				coeff[i] += coeff[i-1];
				
		ans = 0;
		for(i=x; i--;)
		ans = ( ans%MOD + ( arr[i]*coeff[x-1-i] ) % MOD ) % MOD ;
		
		printf("%d\n",ans);
		--T;
	}
	return 0;
}
