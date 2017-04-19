//To determine if a given number is even or odd
#include<iostream>
#include<conio.h>
using namespace std;
int main(void) {
	int num;
	cout<<"Enter a number."<<endl;
	cin>>num;
	if(num!=0) {
		if(num%2==0)
			cout<<num<<" is an Even Number."<<endl;
		else if(num%2!=0)
			cout<<num<<" is an Odd Number"<<endl;
	}
	else if(num==0)
		cout<<"0 is neither odd nor even."<<endl;
	else
	cout<<"Enter a valid intiger"<<endl;
	getch();
	return 0;
}
