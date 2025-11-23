#include<iostream>
#include<cmath>
using namespace std;
 double f_x(double a,double b,double c,double d,double x);
 double df_x(double a,double b,double c, double x);
int main()
{ 
    double a,b,c,d;
    double x=1.0;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    cout<<"d=";
    cin>>d;
   
    for(int i=1;i<=5;i++)
    {
    	x=x-f_x(a,b,c,d,x)/df_x(a,b,c,x);
    	
	}
    cout<<"x="<<x;
	return 0;
}
double f_x(double a,double b,double c,double d,double x)
{
	double f_x1=0;
	f_x1=a*x*x*x+b*x*x+c*x+d;
	return f_x1;
}
double df_x(double a,double b,double c,double x)
{
	double df_x1=0;
	df_x1=3*a*x*x+2*b*x+c;
	return df_x1;
}