//Swapping contents of two variables
#include<iostream>
#include<conio.h>
using namespace std;
int main(void) {
	int a,b,t;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	cout<<"Before swap a="<<a<<" b="<<b<<endl;
	t=a;
	a=b;
	b=t;
	cout<<"After swap a="<<a<<" b="<<b<<endl;
	getch ();
	return 0;
}
