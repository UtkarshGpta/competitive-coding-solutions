#include<iostream>
#include<string>
using namespace std;

short num[1000002]={};

int get_int(char x)
{
	return (int(x)-48);
}

int all_9(short);

int main()
{
	short test(0),j(0),n(0),mid(0),k(0);
	string s="";
	cin >> test;
	
	while(test>0)
	{
		cin>>s;
		n = s.length();
		
		for(j=0;j<n;j++)
		num[j]=get_int(s[j]);
		
		if(all_9(n)){
			cout << 1;
			while(--n > 0)
				cout<<0;
			cout<<1<<endl;
		}
		else
		{
			mid = n/2;
			bool leftsmaller = false;
			int p = mid-1;
			int q = (n%2) ? mid+1 : mid;
			
			while( p>=0 && num[p] == num[q] )
				p--,q++;
			
			if( p<0 )
				leftsmaller=true;
			else if( num[p] < num[q] )
					leftsmaller=true;
			
			while( p>=0 ){
				num[q] = num[p];
				q++;
				p--;
			}
			
			if(leftsmaller == true){
				int carry=1;
				p = mid-1;
				
				if(n%2==1){
					num[mid] += carry;
					if( carry = num[mid]/10 )
						num[mid] %= 10;
					q=mid+1;
				}
				else
				q=mid;
				
				while(p>=0){
					num[p]+=carry;
					if ( carry=num[p]/10 )
						num[p] %= 10;
					num[q++] = num[p--];
				}
			}		
		for(j=0;j<n;j++)
			cout<<num[j];
		
		cout << endl;
		}
		test--;
	}
	return 0;
}

int all_9( short n )
{
    int i = -1;
    short res = 1;
    while ( ++i <= --n ) {
    	if ( num[i]!=num[n] || num[i]!=9 ){
		res = 0;
		break; }
    }
    return res;
}
