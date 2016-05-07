#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	queue<int> i1;
	queue<string> i2;

	while(true){
		int temp=0;
		cin >> temp;
		if(temp!=0){
		i1.push(temp);
		string _="";
		cin >> _;
		i2.push(_);}
		else
		break;
	}
	
	while(!i1.empty()){
		string str=i2.front();
		int col=i1.front();
		i1.pop();
		i2.pop();
		
		int row=str.length()/col;
		char mat[row][col];
		
		for(int i=0 ; i<row ; i++){
			if(i%2 == 0){
				for(int j=0 ; j< col ; j++)
					mat[i][j]=str[j];
				str=str.substr(col,str.length());
			}
			else{
				for(int j=col-1 ; j>=0 ; j--)
					mat[i][col-j-1]=str[j];
				str=str.substr(col,str.length());
			}
		}
		
		for(int i=0 ; i<col ; i++){
			for(int j=0 ; j<row ; j++)
			cout << mat[j][i];
		}
		cout << endl;
	}
}

