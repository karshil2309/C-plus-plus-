/*
		Author:- KARSHIL SHETH
		Objective:-OPERATOR OVERLOADING 
		Date:-	12-02-2018
*/
#include<iostream.h>
//#include<stdio.h>
#include<conio.h>
class  complex
{
	int a,b;
	public:
	void getdata()
	{
		cin>>a>>b;
	}
	void display()
	{

		cout<<a<<b;
	}
	complex operator=( complex c2)
	{
	 //     thisc1=c2.a;
		a=c2.a;
		b=c2.b;

	}


};
void main()
{
	clrscr();
	complex c1,c2;
	c1.getdata();
	c2.getdata();
	c1=c2;
	c1.display();
	c2.display();

       getch();
}