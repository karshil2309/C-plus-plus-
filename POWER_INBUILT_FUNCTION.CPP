/*
	Author:- KARSHIL SHETH
	Objective:-TO IMPLEMENT IN-BUILT FUNCTIONS USING C++.
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>

int power(int m,int n=2)
{
    int result;
    result=pow(m,n);
    cout<<"\nThe result of power "<<n<<" to the base "<<m<<" is: "<<result;
}
void main()
{
    clrscr();
    power(5,3);
    power(5);
    getch();
}
