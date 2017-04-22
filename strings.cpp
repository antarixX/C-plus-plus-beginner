//program to perform different operations on a string
//counting letters spaces stc.
//This one might contain bugs, be carefull!
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(void) {
	int n,count=0;
	string sentence="Jack and Jill went up the hill";
	char c,l;
	cout<<sentence<<"\n"<<endl;
	do {
		cout<<"\nSelect an operation to perform on the above sentence"<<endl;
		cout<<"1.Count the number of characters in the sentence.\n2.Identify the occurances of each alphabet in the sentence.\n3.Count the number of vowels in the sentence.\n4.Count the number of spaces in the sentence.\n5.Exit\n"<<endl;
		cin>>n;
	switch(n) {
		case 1:
			for(int i=0;i<sentence.size();i++) {	
				c=sentence.at(i);
				if(c!=' ')
					count++;
			}
			cout<<"\nTotal number of characters in the above sentence are "<<count<<"\n"<<endl;
			break;
		case 2:
			int count2=0;	
			for(int i=0;i<sentence.size();i++) {
				c=sentence.at(i);
				if(c==' ')
					continue;
				else {
					for(int k=0;k<i;k++) {
						l=sentence.at(k);
						if(l==c)
							count2++;
					}
					if(count2>0) {
						count2=0;
						continue;
					} else {
						for(int j=0;j<sentence.size();j++) {
							l=sentence.at(j);
							if(c==l)
								count++;
						}
						cout<<"The letter "<<c<<" occured "<<count<<" times."<<endl;
					}
					count=0;
				}
			}
			cout<<endl;
			break;
		case 3:
			for(int i=0;i<sentence.size();i++) {
				c=sentence.at(i);
				if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
					count++;
			}
			cout<<"\nThe number of vowels in the above sentence are "<<count<<endl;
			break;
		case 4:
			for(int i=0;i<sentence.size();i++) {
				if(sentence[i]==' ')
				count++;
			}
			cout<<"\nTotal number of spaces in the above sentence are "<<count<<"\n"<<endl;
			break;
		case 5:
			exit(0);
		default:
			cout<<"\nINVALID OPTION!"<<endl;
	}
	count=0;
	}while(n!=5);
	getch();
	return 0;
}
