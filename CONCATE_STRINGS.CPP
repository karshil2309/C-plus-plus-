/*
	Author:- KARSHIL SHETH
	Objective:-TO PERFROM CONCATE OF TWO STRINGS IN c++. 
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
//using namespace std;
class string
{
char s[30];
clrscr();
public:
string()
{
strcpy(s,"");
}
string(char h[43])
{
strcpy(s,h);
}
void display()
{
cout<<"\n value of string    "<<s;
}
string operator+(string s2)
{
string s4;
strcpy(s4.s,this->s);
strcat(s4.s,s2.s);
return s4;
}
};
int main()
{
//clrscr();
string s1("engineering"),s2("indus");
string s3;
s3=s1+s2;

s3.display();
return 0;
getch();
}
