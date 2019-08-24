/*
	Author:- KARSHIL SHETH
	Objective:-TO IMPLEMENT THE USE OF TEMPLATE. 
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>

template<class T>
void swap(T &tnum1,T &tddnum2){
	T temp;
	temp=tnum1;
	tnum1=tnum2;
	tnum2=temp;
}
void main(){

	int inum1,inum2;
	inum1=inum2=0;
	clrscr();
	cout<<"\nEnter the first number";
	cin>>inum1;
	cout<<"\nEnter the second number";
	cin>>inum2;
	//swap(inum1,inum2);
	cout<<endl<<"Before Swapping";
	cout<<endl<<"num1="<<inum1;
	cout<<endl<<"num2="<<inum2<<endl;
	swap(inum1,inum2);
	cout<<endl<<"After Swapping";
	cout<<endl<<"num1="<<inum1;
	cout<<endl<<"num2="<<inum2<<endl;


	float  fnum1,fnum2;
	cout<<"\nEnter the first number";
	cin>>fnum1;
	cout<<"\nEnter the second number";
	cin>>fnum2;
	//swap(inum1,inum2);
	cout<<endl<<"Before Swapping";
	cout<<endl<<"num1="<<fnum1;
	cout<<endl<<"num2="<<fnum2<<endl;
	swap(fnum1,fnum2);
	cout<<endl<<"After Swapping";
	cout<<endl<<"num1="<<fnum1;
	cout<<endl<<"num2="<<fnum2<<endl;





}