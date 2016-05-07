#include<iostream>
#include<queue>
using namespace std;

int main(){
queue<double> input;
double temp=0.0;
do{
	cin >> temp;
	input.push(temp);
}while(temp!=0.0);

int t=input.size();
t--;
double *c=new double[t];
int *card=new int[t];
int index(0);

for(int i=0;i<t;i++)
card[i]=0;

while(1==1){
	if(input.front() != 0.0){
	c[index]=input.front();
	index++;
	input.pop();
	}
	else
	break;
}

for(int i=0;i<t;i++){
	if(c[i] <= 0.5)
	card[i]=1;
	else
	{
		double cards=2.0;
		double overhang=0.0;
		while(overhang < c[i]){
			overhang+=(1.0/cards);
			cards++;
		}
		
		if(overhang > card[i])
		card[i]=cards-2;
	}
}

for(int i=0 ; i<t ; i++)
cout << card[i] << " card(s)" << endl;
return 0;
}
