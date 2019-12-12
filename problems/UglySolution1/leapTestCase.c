//write a function to return if a year is leap year or not
//boolean isLeapYear(int year);
#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year)
{
    if ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))
        return true;
    else if ((year % 4 == 0) && (year % 100 == 0))
        return false;
    else if ((year % 4 == 0))
        return true;
    else
    {
        return false;
    }
}

int main()
{
    int year = 1800;
    while (year <= 2200)
    {
        isLeapYear(year);
        printf("Year: %d", year);
        if (isLeapYear(year))
            printf(" Days: 366\n");
        else
            printf(" Days: 365\n");
        year++;
    }
}
