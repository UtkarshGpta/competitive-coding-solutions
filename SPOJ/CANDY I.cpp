#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> input;
	
	int temp=0;							/*	input	*/
	do{
		cin>>temp;
		input.push(temp);
	}while(temp!=-1);
	
	while (!input.empty())
	{
		if(input.front() == -1)
		input.pop();
		
		else
		
		{
			int n = input.front();
			input.pop();
			int *block=new int[n];
			int sum(0);
			for(int i=0 ; i<n ; i++){
				block[i]=input.front();
				input.pop();
				sum+=block[i];
			}
			
			int moves(0);
			if(sum%n ==0)
			{
				int avg=sum/n;
				for(int i=0;i<n;i++)
				{
					if(block[i] > avg)
					moves+=(block[i]-avg);
				}
			}
			else
			moves=-1;
			
			cout << moves <<endl;
		}
	}
	return 0;
}
