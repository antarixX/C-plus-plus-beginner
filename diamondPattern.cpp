//asterisk diamond pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main(void) {
	for(int i=0;i<8;i++) {
		for(int j=8;j>i;j--)
			cout<<" ";
	for(int k=0;k<i;k++)
		cout<<"* ";
	cout<<endl;
	}
	for(int i=1;i<=8;i++) {
		for(int j=1;j<=i-1;j++)
			cout<<" ";
		for(int k=8;k>=i;k--)
			cout<<"* ";
		cout<<endl;
	}
	getch();
	return 0;
}
