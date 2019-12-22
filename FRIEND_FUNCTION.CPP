/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-USE OF FRIEND FUNCTION. 
	DATE:- 13-02-2018
*/
#include<iostream.h>
#include<conio.h>
class B;
class C;
class D;
class E;
class A
{
	int a;
	friend void add(A,B,C,D,E);
	public:
	A()
	{
		a=3;
	       //	y=6;
	}
	void display()
	{
		cout<<a;

	}
	friend void avg(A,B,C,D,E);

};
class B
{
	int b;
	friend void avg(A,B,C,D,E);

	public:
	B()
	{
	      //	a=4;
		b=7;
	}
	void display1()
	{
		cout<<b;

	}
	friend void add(A,B,C,D,E);

};
class C
{
	int c;
		friend void avg(A,B,C,D,E);

d	public:
	C()
	{
		c=4;
		//b=7;
	}
	void display2()
	{
		cout<<c;

	}
	friend void add(A,B,C,D,E);

};
class D
{
	int d;
		friend void avg(A,B,C,D,E);

	public:
	D()
	{
		d=4;
       }
	void display3()
	{
		cout<<d;

	}
	friend void add(A,B,C,D,E);

};

class E
{
	int e;
		friend void avg(A,B,C,D,E);

	public:
	E()
	{
		e=4;
		//b=7;
	}
	void display4()
	{
		cout<<e;

	}
	friend void add(A,B,C,D,E);

};

void add(A obj1,B obj2,C obj3,D obj4,E obj5)
{
	int ans,avg;
	ans=obj1.a+obj2.b+obj3.c+obj4.d+obj5.e;
	cout<<ans;
       //	avg=(obj1.a+obj2.b+obj3.c+obj4.d+obj5.e)/5;
      //	cout<<"\n"<<avg;

}

void avg(A obj1,B obj2,C obj3,D obj4,E obj5)
{
	int avg;
	avg=(obj1.a+obj2.b+obj3.c+obj4.d+obj5.e)/5;
	cout<<"\n avg is:"<<avg;

}
int main()
{
	clrscr();
	A obj1;
	B obj2;
	C obj3;
	D obj4;
	E obj5;
	add(obj1,obj2,obj3,obj4,obj5);
	avg(obj1,obj2,obj3,obj4,obj5);
	getch();
	return 0;

}
