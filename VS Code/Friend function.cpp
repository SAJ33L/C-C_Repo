//DISPLAY 11.2 Equality Function as a Friend
//Demonstrates the function equal.
//In this version equal is a friend of the class DayOfYear.
#include <iostream>
using namespace std;

class DayOfYear
{
public:
friend bool equal(DayOfYear date1, DayOfYear date2);
//Precondition: date1 and date2 have values.
//Returns true if date1 and date2 represent the same date;
//otherwise, returns false.

DayOfYear(int theMonth, int theDay);
//Precondition: theMonth and theDay form a
//possible date. Initializes the date according
//to the arguments.

DayOfYear( );
//Initializes the date to January first.

void input( );

void output( );

int getMonth( );
//Returns the month, 1 for January, 2 for February, etc.

int getDay( );
//Returns the day of the month.
private:
void checkDate( );
int month;
int day;
};


// driver code
int main( )
{
DayOfYear today, bachBirthday(3, 21);

cout << "Enter today's date:\n";
today.input( );
cout << "Today's date is ";
today.output( );

cout << "J. S. Bach's birthday is ";
bachBirthday.output( );


  if ( equal(today, bachBirthday))
cout << "Happy Birthday Johann Sebastian!\n";
else
cout << "Happy Unbirthday Johann Sebastian!\n";
return 0;
}

// driver codes ends


// friend Function definition
bool equal(DayOfYear date1, DayOfYear date2)
{
return ( date1.month == date2.month &&
date1.day == date2.day );
}


//The rest of this display, including the Sample Dialogue, is the same as in Display 11.1.
DayOfYear::DayOfYear()
: month(1), day(1)
{
//left empty
}

DayOfYear::DayOfYear(int theMonth, int theDay)
: month(theMonth), day(theDay)
{
checkDate();
}

int DayOfYear::getMonth( )
{
return month;
}

int DayOfYear::getDay( )
{
return day;
}

void DayOfYear::checkDate( )
{
if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
{
cout << "Illegal date. Aborting program.\n";
exit(1);
}
}


//Uses iostream:
void DayOfYear::input( )
{
cout << "Enter the month as a number: ";
cin >> month;
cout << "Enter the day of the month: ";
cin >> day;
}



//Uses iostream:
void DayOfYear::output( )
{
cout << "month = " << month
<< ", day = " << day << endl;
}