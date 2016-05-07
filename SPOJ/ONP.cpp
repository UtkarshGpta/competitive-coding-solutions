/* 		Refer https://en.wikipedia.org/wiki/Shunting-yard_algorithm
 			  http://www.algorithmist.com/index.php/SPOJ_ONP  		*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	short test;
	cin>>test;
	string *output=new string[test];
	for(int i=0; i<test; i++)
	{
		output[i]="";
	}
	string oper="+-*/^";
		
	for(short i=1;i<=test;i++)
	{
		string input;
		cin>>input;
		stack<char> yard;
		
		for(int j=0;j<input.length();j++)
		{
			if(isalpha(input[j]))
			output[i-1]+=input[j];
			else
			if(input[j]=='(')
			yard.push('(');
			else
			if( yard.empty()==0  &&  input[j]==')' )
			{
				while( yard.empty()==0 && yard.top()!='(' )
				{
					output[i-1]+=yard.top();
					yard.pop();
				}
				
				if(yard.empty()==0 && yard.top()=='(')
				yard.pop();
			}
			else
			if(input[j]=='+' || input[j]=='-' || input[j]=='*' || input[j]=='/' || input[j]=='^')
			{
				if(yard.empty()==0 && (oper.find(input[j]) <= oper.find(yard.top())) && yard.top()!='(' & yard.top()!=')')
				{
					output[i-1]+=yard.top();
					yard.pop();
					yard.push(input[j]);
				}
				else
				if(yard.empty()==0 && (oper.find(input[j]) > oper.find(yard.top())))
				{
					yard.push(input[j]);
				}
				else
				yard.push(input[j]);
			}
		}
		
		while (yard.empty()==0 && (yard.top()=='+' || yard.top()=='-' || yard.top()=='*' || yard.top()=='/' || yard.top()=='^'))
		{
			output[i-1]+=yard.top();
			yard.pop();
		}
	}
	
	for(short j=0; j<test; j++)
	cout<<output[j]<<endl;
	return 0;
}
