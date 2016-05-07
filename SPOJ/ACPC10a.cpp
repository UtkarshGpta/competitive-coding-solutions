#include<iostream>
using namespace std;

int main()
{ int l,m,n;
cin>>l>>m>>n;

while(1)
{
if(m==0 && n==0 && l==0)
{ break;
}
else if((2*m)==(n+l))
{
cout << "AP " << (n+(m-l)) << endl;
}
else
{
cout << "GP " << (n*(m/l)) << endl;
}
cin>>l>>m>>n;
} return 0;
}
