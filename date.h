#include <iostream>
#include <ctype.h>

#ifndef DATE
#define DATE
// an exception if the date entered is invalid for the month
class bad_day
{
    public:
		bad_day()
		{
			monthnum = daynum = 0;
		}

		bad_day(int m, int d)
		{
			monthnum = m, daynum = d;
		}

		void msg()
		{
			std::cerr << monthnum << " has no day " << daynum << std::endl;
		}

    private:
		int monthnum, daynum;
};

// an exception for an invalid month number
class bad_month
{
    public:
		bad_month()
		{
			monthnum = 0;
		}

		bad_month(int m)
		{
			monthnum = m;
		}

		void msg()
		{
			std::cerr << monthnum << " is an invalid month number.\n";
		}

    private:
		int monthnum;
};

// a simple class for holding dates
class Date
{
    public:
		Date();
		Date(int d, int m, int y);

		// outputs the date
		friend std::ostream& operator << (std::ostream& outs, Date d);

		//inputs the date
		friend std::istream& operator >> (std::istream& ins, Date& d);

		/**************************************************
				COMPARSION OPERATORS
		**************************************************/
		friend bool operator > (const Date& d1, const Date& d2);

		friend bool operator < (const Date& d1, const Date& d2);

		friend bool operator == (const Date& d1, const Date& d2);

		friend bool operator != (const Date& d1, const Date& d2);
		
		friend bool operator <= (const Date& d1, const Date& d2);

		friend bool operator >= (const Date& d1, const Date& d2);


	private:
		int day;
		int month;
		int year;
		int daysallowed[13];
};
#endif