#include<iostream>					/*http://keisan.casio.com/exec/system/1329962711 */
#include<cmath>
#include<iomanip>
using namespace std;

double area(short, short, short);

int main()
{
	short N;
	cin>>N;
	
	short *wx=new short[N];
	short *wy=new short[N];
	short *wz=new short[N];
	short *xy=new short[N];
	short *xz=new short[N];
	short *yz=new short[N];
	double *R=new double[N];
	
	for(short i=0;i<N;i++)
	{
		cin>>wx[i]>>wy[i]>>wz[i]>>xy[i]>>xz[i]>>yz[i];
	}
	
	for(short i=0;i<N;i++)
	{
		double a4=wx[i]*wx[i];
		double a6=wy[i]*wy[i];
		double a1=wz[i]*wz[i];
		double a5=xy[i]*xy[i];
		double a2=xz[i]*xz[i];
		double a3=yz[i]*yz[i];
		
		double k=(a1*a5)*(a2+a3+a4+a6-a1-a5)+(a2*a6)*(a1+a3+a4+a5-a2-a6)+(a3*a4)*(a1+a2+a5+a6-a3-a4)-((a1*a2*a4)+(a2*a3*a5)+(a1*a3*a6)+(a4*a5*a6));
		double V=sqrt(k)/12.0;
		double A1=area(xy[i],yz[i],xz[i]);
		double A2=area(wx[i],wz[i],xz[i]);
		double A3=area(wy[i],yz[i],wz[i]);
		double A4=area(wx[i],wy[i],xy[i]);
		
		R[i]=(3*V)/(A1+A2+A3+A4);
	}
	
	for(short i=0; i< N ; i++)
	{
		cout << fixed << setprecision(4) << R[i] << endl;
	}
}

double area(short x,short y, short z)
{
	double s=(x+y+z)/2.0;
	double area=sqrt(s*(s-x)*(s-y)*(s-z));
	return area;
}
