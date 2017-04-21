//To convert temperature from celsius to fahrenheit
#include<iostream>
#include<conio.h>
using namespace std;
int main(void) {
	int c,f;
	cout<<"Enter the temperature in Celsius"<<endl;
	cin>>c;
	f=(9*c/5)+32;
	cout<<c<<" degree Celsius is equal to "<<f<<" degree Fahrenheit."<<endl;
	getch();
	return 0;
}
