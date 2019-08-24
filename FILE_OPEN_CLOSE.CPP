/*
				Author:- KARSHIL SHETH
				Objective:-TO IMPLEMENT OF FILE IN C++.	
				Date:- 11-02-2018
*/
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{
	clrscr();
	ofstream fout;
	fout.open("country");

	fout<<" United states\n";
	fout<<"United Kingdom\n";
	fout<<"South Korea\n";

	fout.close();
	fout.open("capital");
	fout<< "Washington\n";
	fout<<"London\n";
	fout<<"Seoul\n";

	fout.close();
	fout.open("CITY");
	fout.open("Ahmedabad\n");
	fout.open("abrrkg\n");
	fout.open("askdjfkdg\n");
	fout.close();

	const int N=100;
	char line[N];

	ifstream fin;
	fin.open("country");

	while(fin)
	{
		fin.getline(line,N);
		cout<<line<<endl;

	}
	fin.close();
	fin.open("capital");

	while(fin)
	{
		fin.getline(line,N);
		cout<<line<<endl;

	}
	fin.close();

	fin.open("CITY");

	while(fin)
	{
		fin.getline(line,N);
		cout<<line;

	}
	fin.close();
	getch();

}