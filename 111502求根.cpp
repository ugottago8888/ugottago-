#include<iostream>
#include<cmath>
using namespace std;
void function1(double a,double b,double c,double D,double &x1,double &x2);
void function2(double a,double b,double c,double D,double &x);
void function3(double a,double b,double c,double D,double &r,double &u);
int main()
{double a,b,c,D,x1,x2;
	cout<<"a=" ;
	cin>>a;
	cout<<"b=" ;
	cin>>b;
	cout<<"c=";
	cin>>c;
	D=b*b-4*a*c;
	
	if(D>0)
	{
		function1(a,b,c,D,x1,x2);
		
		cout<<"x1="<<x1<<"x2="<<x2<<endl;
	}
	else if(D==0)
	{
		function2(a,b,c,D,x1);
		
		cout<<"x1=x2="<<x1<<endl;
	}
	else
	{
		double r,u;
		function3(a,b,c,D,r,u);
		cout<<"x1="<<r<<"+"<<u<<"i"<<endl;
		cout<<"x2="<<r<<"-"<<u<<"i"<<endl;
	}
	return 0;
}
void function1(double a,double b,double c,double D,double &x1,double &x2)
{
	 
	x1=(-b+sqrt(D))/(2*a);
	x2=(-b-sqrt(D))/(2*a);
	 
}
void function2(double a,double b,double c,double D,double &x)  
{

	x=(-b-sqrt(D))/(2*a);
}
void function3(double a,double b,double c,double D,double &r,double &u)
{
 
	r=-b/(2*a);
	u=sqrt(-D)/(2*a);
	 
}