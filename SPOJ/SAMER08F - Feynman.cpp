#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int input(0);
	queue<int> inp;
	
	do{
		cin >> input;
		inp.push(input);
	}while(input != 0);
	
	while(!inp.empty()) {
		if(inp.front()==0)
		break;
		else
		{
			int n=inp.front();
			inp.pop();
			cout << ( n*(n+1)*(2*n+1) / 6 ) << endl;
		}
	}
	return 0;
}
