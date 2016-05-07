#include<iostream>				// ADDITION, SUBTRACTION AND DIVISION FUNCTIONS
#include<string>
using namespace std;

int get_int(char x)
{
	return (int(x)-48);
}

void add(short[], short[], short* , short[]);
void subtract(short[], short[], short* , short[]);
void division(short[], short* , short[]);

int main()
{
	short k[10][102]={};
	short n[10][102]={};
	
	for(int i=0;i<10;i++)
	{
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		short x[101]={};
		short y[101]={};
		short *ad=new short[101];
		short *sub=new short[101];
		short a[101]={};
		short b[101]={};
		short p=s1.length();
		short q=s2.length();
		for(int j=0;j<p;j++)
		x[j]=get_int(s1[p-j-1]);
		for(int j=0;j<q;j++)
		y[j]=get_int(s2[q-j-1]);
		
		short num=p;
		short *ptr=&num;
		
		add(x,y,ptr,ad);
		num=*ptr-1;
		division(ad,ptr,a);
		k[i][0]=a[0];
		delete ad;
		
		num=p;
		subtract(x,y,ptr,sub);
		num=*ptr-1;
		division(sub,ptr,b);
		n[i][0]=b[0];
		delete sub;
			

		for(int j=1;j<a[0];j++)
		{
			k[i][j]=a[j];
		}
		
		for(int j=1;j<b[0];j++)
		{
			n[i][j]=b[j];
		}
	}
	
	for(int i=0;i<10;i++)
	{
		for(int j=1;j<k[i][0];j++)
		cout<<k[i][j];
		cout<<endl;
		for(int j=1;j<n[i][0];j++)
		cout<<n[i][j];
		if(i!=9)
		cout<<endl;
	}
	return 0;
}

void add(short a[], short b[], short *p , short c[])
{
	short temp=0;
	for(int i=0;i<*p;i++)
	{
		temp=a[i]+b[i]+temp;
		c[i]=temp%10;
		temp/=10;
	}
	
	if(temp>0)
	c[(*p)++]=temp;
}

void subtract(short a[], short b[], short *p , short c[])
{
	short temp=0;
	for(int i=0;i<*p;i++)
	{
		temp=a[i]-b[i];
		if(temp<0)
		{
			c[i]=10+temp;
			a[i+1]--;
		}
		else
		c[i]=temp;
	}
	
	for(int i=(*p)-1;i>=0;i--)
	if(c[i]!=0)
	{
		*p=i+1;
		break;
	}
	if(c[(*p)-1]==0)
	*p=1;
}

void division(short a[], short *p , short b[])
{
	b[0]=1;
	short rem(0);
	short temp(0);
	
	for(int i=*p;i>=0;i--)
	{
		if( rem==0 && a[i]==1)
		{
			temp=10*a[i]+a[--i];
			if(i!=*p-1)
			b[0]++;
		}
		else
		temp=10*rem+a[i];
		
		b[b[0]++]=temp/2;
		rem=temp%2;
	}
}
