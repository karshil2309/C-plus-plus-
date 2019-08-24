/*
	Author:- KARSHIL SHETH
	Objective:-TO IMPLEMENT THE POWER FUNCTION WITHOUT USING IN_BUILT FUNCTIONS. 
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>
void power(int a,int b)
{
int i;
for(i=1;i<=b;i++)
{
	a=a*b;
}
cout<<a;

}
void main()
{
	int m,n;
	clrscr();
	cout<<"\n enter the m";
	cin>>m;
	cout<<"\n enter n";
	cin>>n;
	cout<<"\n the answer is";
	pow(m,n);
	getch();

}