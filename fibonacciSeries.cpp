//To print first n numbers of fibonacci series
#include<iostream>
#include<conio.h>
using namespace std;
int main(void) {
	int n,fir=0,sec=1,thi;
	cout<<"How many numbers of fibonacci series to print?"<<endl;
	cin>>n;
	if(n==0)
		cout<<"There are no numbers"<<endl;
	else if(n==1)
		cout<<"Number is\n"<<fir<<endl;
	else if(n==2)
		cout<<"Numbers are\n"<<fir<<"\n"<<sec<<endl;
	else if(n>=3) {
		cout<<"Numbers are\n"<<fir<<"\n"<<sec<<endl;
		for(int i=0;i<n-2;i++) {
			thi=fir+sec;
			cout<<thi<<endl;
			fir=sec;
			sec=thi;
		}
	}
	else
		cout<<"Enter a valid Intiger!"<<endl;
	getch();
	return 0;
}
