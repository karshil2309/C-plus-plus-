/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-CALENDAR OF DAYS AND MONTHS. 
	DATE:- 13-02-2018
*/
#include<iostream.h>
#include<conio.h>
class calender
{
	   int d,m,y;
	   public:
	   calender(int a1,int a2,int a3)
	   {
		d=a1;
		m=a2;
		y=a3;


	   }
	   void adddays()
	   {
		int i;
		cout<<"enter days";
		cin>>i;
		d=d+i;
		if(d>31)
		{
			m=m+d/31;
			d=d%31;
		}
		if(m>12)
		{
			y=y+m/12;
			m=m%12;

		}


	   }

	 void display()
	 {

		cout<<"ddmmyy"<<d<<m<<y;

	 }

};
void main()
{
	clrscr();
	calender c1(1,1,2000);
	c1.adddays();
	c1.display();
	getch();

}