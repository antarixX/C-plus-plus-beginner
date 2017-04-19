//Plus of plus pattern
#include<iostream>
#include<conio.h>
using namespace std;
void add() {
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++)
			cout<<" ";
	for(int k=0;k<3;k++)
		cout<<"+";
	cout<<endl;
	}
}
void sadd() {
	for(int n=0;n<3;n++) {
		for(int m=0;m<9;m++) {
			cout<<"+";
		}
	cout<<"\n";
	}
}
int main(void) {
	void sadd();
	void add();
	add();
	sadd();
	add();
	getch();
	return 0;
}
