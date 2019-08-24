/*
	Author:- KARSHIL SHETH
	Objective:-TO PERFROM BANK APPLICATIONS USING C++. 
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>

class bank
{
    long int ano;
    float balance;
    public:
    static int count;
    void getdata()
    {
	cout<<"\nEnter account no:";
	cin>>ano;
	cout<<"\nEnter balance:";
	cin>>balance;
	count=count+1;
    }
    static int getcount()   //static function
    {
	return count;
    }
    void display();
};
int bank::count;      //static variable
void bank::display()  //member function declaration outside the class
{
    cout<<"\nAccount no:"<<ano<<"\nBalance:"<<balance;
    cout<<"\nCount:"<<count;
}
void main()
{
    clrscr();
    bank b1,b2,b3;
    b1.getdata();
    b2.getdata();
    b3.getdata();
    b1.display();
    b2.display();
    b3.display();
    cout<<"\n(using static function)count="<<bank::getcount();
    getch();
}









