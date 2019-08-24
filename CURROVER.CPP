/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-CURRENCY OVERLOADING 
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
	void display()
	{
		cout<<"rs"<<r<<"."<<p;

	}
	void operator=(currency o2)
	{
		r=r+o2.r;
		p=p+o2.p;

	}
};
void main()
{
	clrscr();
	currency a1(6,6),a2(8,9);
	a1=a2;
	a1.display();
	getch();

}


