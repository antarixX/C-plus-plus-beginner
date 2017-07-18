//program to calculate roots of a quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

void funct(float*x,float*y,float*z) {
	float d,r1,r2;
	d=(*y)*(*y)-4*(*x)*(*z);
	if(d<0)
		cout<<"The Equation has imaginary roots.";
	else {
		r1=((-*y)+sqrt(d))/(2*(*x));
		r2=((-*y)-sqrt(d))/(2*(*x));
		cout<<"Root1 = "<<r1<<"	Root2 = "<<r2;
	}
}

void main() {
	float a,b,c;
	cout<<"To Calculate Roots of a Quadratic Equation\n ax+by+c=0\n";
	cout<<"Enter value of 'a' : ";
	cin>>a;
	cout<<"Enter value of 'b' : ";
	cout>>b;
	cout<<"Enter value of 'c' : ";
	cout>>c;
	cout<<"Equation is : "<<a<<"x + "<<b<<"y + "<<c<<" = 0\n";
	funct(&a,&b,&c);
	_getch();
}
