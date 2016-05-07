#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	short t;
	cin>>t;
	double *x_out=new double[t];		/*input and output x,y co-ordinates for t test cases*/
	double *y_out=new double[t];
	
	for(short i=0;i<t;i++)
	{
		x_out[i]=0.0;
		y_out[i]=0.0;
	}
	
	int n(0);
	
	for(short i=1;i<=t;i++)
	{
		cin >> n;
		int *x_inp=new int[n+1];
		int *y_inp=new int[n+1];
		
		for(short j=0;j<n;j++)
		{
			cin >> x_inp[j] >> y_inp[j];
		}
		
		x_inp[n]=x_inp[0];
		y_inp[n]=y_inp[0];
		
		double x_temp(0.0),y_temp(0.0);					
		double area(0.0);
		
		for(short j=0;j<n;j++)
		{
			double w=x_inp[j]*y_inp[j+1]-x_inp[j+1]*y_inp[j];
			area=area+(w/2.0);
			x_temp=x_temp + (w*(x_inp[j]+x_inp[j+1]))/6.0;
			y_temp=y_temp + (w*(y_inp[j]+y_inp[j+1]))/6.0;
		}

		x_out[i-1]=x_temp/area;
		y_out[i-1]=y_temp/area;
	}
	
	for(short i=0;i<t;i++)
	{
		if (fabs(x_out[i]) < 0.005 - 1e-9) x_out[i] = 0;
		if (fabs(y_out[i]) < 0.005 - 1e-9) y_out[i] = 0;

		printf("%.2f %.2f\n",
				x_out[i] + 1e-9 * (x_out[i] >= -1e-9 ? 1 : -1),
				y_out[i] + 1e-9 * (y_out[i] >= -1e-9 ? 1 : -1));
	}
	return 0;
}
