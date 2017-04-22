//student of the year program
//using if, else if, else and goto only
//try out this program to test your skill
//It selects an eligible student for an award based on 
//certain factors which are coded using only If-Else construct
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(void)
{
	int phy,chem,math,IT,CS,years,torn;
	float agr,per;
	string choice,name,answer;
	cout<<"What is your name?"<<endl;
	getline(cin,name);
	cout<<"Hello "<<name<<" please answer the following quetions by typing either YES or NO"<<endl;
	cout<<"Do you know your percentage "<<name<<"?"<<endl;
	begin:
	getline(cin,choice);
	if(choice=="yes"||choice=="YES") {
		cout<<"Please enter your percentage "<<name<<"."<<endl;
		cin>>per;
		percent:
		if(per>=60) {
			cout<<"Congratulations "<<name<<" you are eligible for Student of the year compition!:D\n"<<endl;
			cout<<"Now lets check your Sports Qualification!\n"<<endl;
			cout<<"Are you in your class cricket team "<<name<<"?"<<endl;
			again3:
			getline(cin,answer);
			if(answer=="yes"||answer=="YES") {
				cout<<"Have you ever been the captain of your team?"<<endl;
				again4:
				getline(cin,answer);
				if(answer=="yes"||answer=="YES") {
					cout<<"How may years have you captained your team "<<name<<"?"<<endl;
					again5:
					cin>>years;
					if(years>=3) {
						cout<<"That's great "<<name<<"!\nHas your team won tornaments under your Leaderhip?"<<endl;
						again6:
						getline(cin,answer);
						if(answer=="yes"||answer=="YES") {
							cout<<"WoW! how many times has your team won the tournament?"<<endl;
							again7:
							cin>>torn;
							if(torn>=1) {
								cout<<"That's Awesome "<<name<<"!";
								cout<<"CONGRATULATIONS YOU ARE THE STUDENT OF THE YEAR!!!!!!!!!!!! :D :D :D :D"<<endl;
							} else if(torn<1) {
								cout<<"Thats bad, It seems like your leadership skills are not good enough!\n I'm sorry "<<name<<" but you are not eligible for the compitition!:("<<endl;
								goto thanx;
							} else {
								cout<<"Please give a valid answer "<<name<<"."<<endl;
								goto again7;
							}
						} else if(answer=="NO"||answer=="no") {
							cout<<"Sorry "<<name<<" you are not eligible!:("<<endl;
							goto thanx;
						} else {
							cout<<"Answer by typing yes or no."<<endl;
							goto again6;
						}
					} else if(years<=2) {
						cout<<"Oh no! It seems your team didnt like your leadership!\n"<<name<<" this means you are not eligible for the compition!:("<<endl;
						goto thanx;
					} else {
						cout<<"Please give a valid answer "<<name<<"."<<endl;
						goto again5;
					}
				} else if(answer=="NO"||answer=="no") {
					cout<<"Sorry "<<name<<" you are not eligible!:("<<endl;
					goto thanx;
				} else {
					cout<<"Please give a valid answer "<<name<<endl;
					goto again4;
				}
			} else if(answer=="NO"||answer=="no") {
				cout<<"Sorry "<<name<<" you are not eligible!:("<<endl;
			} else {
				cout<<"Answer by typing yes or no "<<endl;
				goto again3;
			}
		} else {
			cout<<"Sorry "<<name<<" you have not got first class! Hence you are not eligible.:("<<endl;
		}
	} else if(choice=="no"||choice=="NO") {
		cout<<"Do you know your agregate marks?"<<endl;
		again1:
		getline(cin,choice);
		if(choice=="YES"||choice=="yes") {
			cout<<"Please enter your agregate marks "<<name<<"."<<endl;
			cin>>agr;
			agregate:
			per=(agr/500)*100;
			cout<<name<<" your percentage is "<<per<<"%"<<endl;
			goto percent;
		} else if(choice=="NO"||choice=="no") {
			cout<<name<<" do you atleast know your marks per subject?"<<endl;
			again2:
			getline(cin,choice);
			if(choice=="YES"||choice=="yes") {
				cout<<"Please enter the marks one by one"<<endl;
				cout<<"Physics:"<<endl;
				cin>>phy;
				cout<<"Chemisrty:"<<endl;
				cin>>chem;
				cout<<"Mathematics:"<<endl;
				cin>>math;
				cout<<"Information Technology:"<<endl;
				cin>>IT;
				cout<<"Communication skills:"<<endl;
				cin>>CS;
				if(phy<35||chem<35||math<35||IT<35||CS<35) {
					cout<<"Oh No! "<<name<<" it seems you have failed in one or more subjects! I'm sorry but you are not eligible.:("<<endl;
					goto thanx;
				} else {
				agr=phy+chem+math+IT+CS;
				goto agregate;
				}
			} else if(choice=="no"||choice=="NO") {
				cout<<"My my you need to know your marks "<<name<<", check your marks and come back again!"<<endl; 
			}
			else {
				cout<<"Please enter a valid answer "<<name<<"."<<endl;
				goto again2;
			}
		} else {
			cout<<"Please enter a valid answer "<<name<<"."<<endl;
			goto again1;
		}
	} else {
		cout<<"Please enter a valid answer "<<name<<"."<<endl;
		goto begin;
	}
	thanx:
	cout<<"Thank You!"<<endl;
	getch();
	return 0;
}
