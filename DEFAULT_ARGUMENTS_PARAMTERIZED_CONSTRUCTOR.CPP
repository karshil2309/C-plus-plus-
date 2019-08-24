/*
	Author:- KARSHIL SHETH
	Objective:-USE OF DEFAULT ARGUMENTS{PARAMETRIZED CONSRUCTOR}. 
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>
void sum(int a,int b,int c=0,int d=0)
{
	int sum;
	sum=a+b+c+d;
	cout<<"\nsum is :"<<sum;

}
void main()
{
	clrscr();
	sum(1,2,3,4);
	sum(1,2,6);
	sum(1,2);
	getch();


}