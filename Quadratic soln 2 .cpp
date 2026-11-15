# include<iostream>
# include<cmath>
using namespace std;
double quadratic1(double a,double b,double c,double d,double x){
	d=(b*b)-(4*a*c);
	return x=(-b+sqrt(d))/(2*a);
}
double quadratic2(double a,double b,double c,double d,double x){
	d=(b*b)-(4*a*c);
	return x=(-b-sqrt(d))/(2*a);
}            
int main(){
	double a,b,c,d,x;
	int r,k;
	cout<<"Enter a\n";
	cin>>a;
	cout<<"Enter b\n";
	cin>>b;
	cout<<"Enter c\n";
	cin>>c;
	r=quadratic1(a,b,c,d,x); 
	cout<<"Root of x^2-7x+12 = "<<r<<"\n";
	k=quadratic2(a,b,c,d,x);
	cout<<"Root of x^2-7x+12 = "<< k<<"\n";
	d=(d*d)-(4*a*c);
	cout<<"b^2-4ac = "<<d<<"\n";
	if (d>0){
		cout<<"Nature of root: real and distinct";
	}
	else if (d<0){
		cout<<"Natue of root: complex";
	}
	else if (d>=0){
		cout<<"Nature of root: real";
	}
	else if(d==0){
		cout<<"Nature of root: real and equal";
	}
	else{
		cout<<"root does not exist";
	}
	return 0;
}