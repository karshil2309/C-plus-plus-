/*
		name:KARSHIL SHETH
		dob:9-10-2017
		OBJECTIVE:Bank Application USING CONSTRUCTOR AND DESTRUCTOR.
		email:karshilsheth@gmail.com
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
class bank
{
	float D_amt,W_amt,bal;//sum=0;//diff=0;
	public:
	bank()
	{
	       bal=10000;

	}
	~bank()
	{
		cout<<"\nDestructor called";
	}
	void deposit();
	void withdrawl();
	void display();

};
void  bank :: display()
{
	cout<<"\nthe amount in bank is "<<bal;

}

void bank :: withdrawl()
{
 cout<<"\nEnter amt to be withdrwal";
 cin>>W_amt;
 if(W_amt<0||(bal-W_amt)<10000)
 {
      //	cin>>W_amt;
       cout<<"\namount withdrawn is not possible";
 }
 else
 {
 bal=bal-W_amt;
 cout<<"\nbal is :"<<bal;
 }
 cout<<"\n the amount left is:"<<bal;

}
void bank :: deposit()
{
	cout<<"Enter the amount to deposit";
	cin>>D_amt;
	if(D_amt<0)
	{
		cout<<"\nenter amount is not possible";
	}
	bal=bal+D_amt;
	cout<<"\n enter amount is:"<<bal;
}
int main()
{
	int ch;
	clrscr();
	bank obj;
	start:
	cout<<"\n1)TO deposit";
	cout<<"\n2)TO withdraw";
	cout<<"\n3)TO display";
	cout<<"\n4)exit";
	cout<<"\nyour option is:";
	cin>>ch;
	switch(ch)
	{ case 1:
	       //	bank obj;
		obj.deposit();
		break;
	  case 2:
		 obj.withdrawl();
		 break;
	  case 3:
		obj.display();
		break;
	   case 4:

	   exit(0);
	   break;

	}
	goto start;
	return 0;
}
