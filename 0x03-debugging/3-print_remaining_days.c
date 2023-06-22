#include <stdio.h>
#include 'main.h"
/**
*print_remaining days - take a date and print how many days are therein
*remaining in the year, take account of leap years
*@month: months in number format
*@day: days in a month
*@year: year
*Return: void
*/
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n",366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
		else
		{
			printf("Day of the year: %d\n", day);
			rintf("Remaining days: %d\n", 365 - day);
		}
	}
}
