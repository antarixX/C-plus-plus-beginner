//Operations on matrices
//Matrices represented using 2D arays
//Operations performen on matrices : 
//1.Addition 
//2.Multiplication 
//3.Transpose

#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

int getary(int aray[][20],int r,int c) {
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++)
		cin>>aray[i][j];
	}
	return (aray[20][20]);
}
void display(int aray[][20],int r,int c) {
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++)
			cout<<aray[i][j]<<"	";
	cout<<endl;
	}
}
int main(void) {
	int n,m,x,y,opt,a[20][20],b[20][20],sum=0;
	do {
		cout<<"Select one of the following operations\n1.Addition of matrix\n2.Multiplication of matrix\n3.Transpose of matrix\n4.Exit"<<endl;
		cin>>opt;
		switch(opt) {
			case 1:
				cout<<"\nEnter the number of rows of matrix"<<endl;
				cin>>m;
				n=m;
				cout<<"Enter the elements of the first matrix row by row"<<endl;
				a[20][20]=getary(a,m,n);
				cout<<"Enter the elements of the second matrix row by row"<<endl;
				b[20][20]=getary(b,m,n);
				cout<<"First matrix"<<endl;
				display(a,m,n);
				cout<<"Second matrix"<<endl;
				display(b,m,n);
				cout<<"\nAfter addiding both the matrices:\n"<<endl;
				for(int i=0;i<m;i++) {
					for(int j=0;j<n;j++)
						cout<<a[i][j]+b[i][j]<<"	";
					cout<<endl;
				}
				break;
		case 2:
			cout<<"Enter the number of rows of first matrix"<<endl;
			cin>>m;
			cout<<"Enter the number of coloumns of the first matrix"<<endl;
			cin>>n;
			cout<<"The number of rows of second matrix will be "<<n<<" to carry out multiplication\nof matrices"<<endl;
			x=n;
			cout<<"Enter the number of coloumns of the second matrix"<<endl;
			cin>>y;
			cout<<"Enter the elements of the first matrix row by row"<<endl;
			a[20][20]=getary(a,m,n);
			cout<<"Enter the elements of the second matrix row by row"<<endl;
			b[20][20]=getary(b,x,y);
			cout<<"First matrix"<<endl;
			display(a,m,n);
			cout<<"Second matrix"<<endl;
			display(b,x,y);
			cout<<"After multiplying both the matrices:"<<endl;
			for(int i=0;i<m;i++) {
				for(int j=0;j<y;j++) {
					for(int k=0;k<x;k++) {
						sum=sum+a[i][k]*b[k][j];
					}
					cout<<sum<<"	";
					sum=0;
				}
				cout<<endl;
			}
			break;
		case 3:
			cout<<"\nEnter the number of rows of matrix"<<endl;
			cin>>m;
			cout<<"Enter the number of coloumns of the matrix"<<endl;
			cin>>n;
			cout<<"Enter the elements of the matrix row by row"<<endl;
			a[20][20]=getary(a,m,n);
			cout<<"The entered matrix is"<<endl;
			display(a,m,n);
			cout<<"Transpose of the matrix is:"<<endl;
			for(int i=0;i<n;i++) {
				for(int j=0;j<m;j++)
					b[i][j]=a[j][i];
			}
			for(int i=0;i<n;i++) {
				for(int j=0;j<m;j++)
					cout<<b[i][j]<<"	";
				cout<<endl;
			}
			break;
		case 4:
			cout<<"PROGRAM ENDED!"<<endl;
			Sleep(2000);
			exit(0);
		default:
			cout<<"INVALID CHOICE"<<endl;
		}
	} while(opt!=4);
	getch();
	return 0;
}


