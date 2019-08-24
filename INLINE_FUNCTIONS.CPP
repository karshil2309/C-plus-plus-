/*
	Author:- KARSHIL SHETH
	Objective:-USE OF INLINE FUNCTIONS. 
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>
class A
{
	int x;
	public:
	inline double cube(double x)
	{
		return(x*x*x);

	}


};
int main()
{

       int ans;
       A obj;
      ans=obj.cube(3);
      cout<<ans;
       getch();
       return 0;

}