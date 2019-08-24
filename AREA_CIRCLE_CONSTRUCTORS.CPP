/*
	Author:- KARSHIL SHETH
	Objective:-TO FIND THE AREA OF CIRCLE USING CONSTRUCTORS. 
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>
void area(double r)
{
float a1;
a1=3.14*r*r;
cout<<"\n area of circle is:"<<a1;

}
void area(float l,float b)
{
   float a2;
   a2=l*b;
   cout<<"\n area of rectangle is:"<<a2;

}
void area(float s)
{
	float a3;
	a3=s*s;
	cout<<"\narea of square is :"<<a3;
}
void main()
{
	double r;
	float l,s,b;
	clrscr();
	cout<<"\n enter the radius of circle";
	cin>>r;

	cout<<"\n enter the length of square";
	cin>>s;

	cout<<"\n enter the length and breadth of rectangle";
	cin>>l>>b;
	area(r);
	area(l,b);
	area(s);
	getch();
}