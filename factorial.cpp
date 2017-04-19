//To find the factorial of a given number
#include<conio.h>
#include<iostream>
using namespace std;
int main(void) {
	int n,fact=1;
	cout<<"Enter a number to find its factorial"<<endl;
	cin>>n;
	if(n==0)
		cout<<"Factorial of "<<n<<" is 1"<<endl;
	else if(n>0) {
		for(int a=n;a>0;a--)
			fact=fact*a;
		cout<<"Fcatorial of "<<n<<" is "<<fact<<endl;
	}
	else
		cout<<"Enter valid Intigers!"<<endl;
	getch ();
	return 0;
}
