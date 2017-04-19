//To print first n prime numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int d,n,num,count=0;
	cout<<"How many prime numbers to print?"<<endl;
	cin>>num;
	if(num==0)
		cout<<"There are no numbers!"<<endl;
	else if(num==1)
		cout<<"Numbers is:\2"<<endl;
	else if(num>1) {
		cout<<"Numbers are:"<<endl;
		for(n=2;count<num;n++) {
			for(d=2;d<n;d++) {
				if(n%d==0)
			    break;	
			}
			if(n==d) {
				cout<<d<<endl;
				count++;
			}
		}
	}
	getch();
	return 0;
}
