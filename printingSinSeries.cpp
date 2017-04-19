//To print fist 'n' numbers of Sin Series
#include<iostream>
#include<conio.h>
using namespace std;
int main(void) {
	int n;
	cout<<"How many numbers of sin series to print?"<<endl;
	cin>>n;
	if(n==0)
		cout<<"There are no Numbers!"<<endl;
	else if(n==1)
		cout<<"Series:\n1"<<endl;
	else if(n>1) {
		cout<<"Series:\n1";
		for(int i=1;i<n;i++)
			cout<<" + x^"<<i<<"/"<<i<<"!";
	}
	else
		cout<<"Enter a valid Number!"<<endl;
	getch();
	return 0;
}
