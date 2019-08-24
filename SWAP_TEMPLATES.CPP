/*
	Author:- KARSHIL SHETH
	Objective:- TO PERFORM THE SWAP OPERATIONS USING TEMPLATES. 
	Date:-	12-02-2018
*/
#include<iostream.h>

template<class T>
void swap(T &num1,T &num2)
{

	T temp
temp=tnum1;
tnum1=tnum2;
tnum2=temp;
}

void fun(int tinum1,int tinum2,float tfnum1,float tfnum2)
{
cout<<endl<<"before swapping";
cout<<endl<<"num1"<<tinum1;
cout<<endl<<"num2"<<tinum2;
swap(tinum1,tinum2);

cout<<endl<<"after swapping";
cout<<endl<<"num1"<<tinum1;
cout<<endl<<"num2"<<tinum2;

cout<<endl<<"before swapping";
cout<<endl<<"num1"<<tfnum1;
cout<<endl<<"num2"<<tfnum2;
swap(tfnum1,tfnum2);

cout<<endl<<"after swapping";
cout<<endl<<"num1"<<tfnum1;
cout<<endl<<"num2"<<tfnum2;

}
void main()
{

	int inum1,inum2;
inum1=0=inum2;
cout<<endl<<"Enter the first number";
cin>>inum1;

cout<<endl<<"Enter the second number";
cin>>inum2;

	float fnum1,fnum2;
fnum1=fnum2=0;

cout<<endl<<"Enter the first number";
cin>>fnum1;
cout<<endl<<"Enter the first number";
cin>>fnum1;
fun(inum1,inum2,fnum1,fnum2);
getch();
}