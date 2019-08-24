/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-CURRENCY 
	DATE:- 13-02-2018
*/
#include<iostream.h>
#include<conio.h>
class currency
{
	int r,p;
	public:
	currency(int a,int b)
	{
	    r=a;
	    p=b;

	}
	void sum( currency c1)
	{
	       r=r+c1.r;
	       p=p+c1.p;

	}
	void display()
	{
		cout<<r<<"."<<p;

	}

};
void main()
{
	clrscr();
	currency a1(6,60),a2(8,50);
	 a1.sum(a2);
	a1.display();
	getch();
}