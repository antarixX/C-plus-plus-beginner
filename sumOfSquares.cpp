//To print sum of first 'n' numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main(void) {
	int n,sum=0;
	cout<<"To find the sum of squares of first n numbers\nEnter the value of n."<<endl;
	cin>>n;
	if(n==0)
		cout<<"There are no numbers."<<endl;
	else if(n>=1) {
		for(int x=1;x<=n;x++)
			sum=sum+(x*x);
		cout<<"The sum of the squares of first "<<n<<" numbers is "<<sum<<"."<<endl;
	}
	else
		cout<<"Enter valid Intigers!"<<endl;
	getch();
	return 0;
}
