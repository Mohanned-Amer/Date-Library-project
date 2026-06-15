#include<iostream>
#include<string>
#include "clsString.h";
#include "clsDate.h";

using namespace std;

int main()
{

	clsDate Date1;
	 Date1.Print();

	 clsDate Date2("13/5/2026");
	 Date2.Print();

	clsDate Date3(13,1,2025);
	Date3.Print();

	clsDate Date4(254,2026);
	Date4.Print();


	//Date1.PrintYearCalendar();
	Date2.PrintMonthCalendar();
	
	











	system("pause>0");
	return 0;
}