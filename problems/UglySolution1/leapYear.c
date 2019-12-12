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
    int year;
    printf("Enter in any year:\n");
    scanf("%d", &year);
    printf("You chose year %d\n", year);
    isLeapYear(year);
    if (isLeapYear(year))
        printf("This year has 366 days\n");
    else
    {
        printf("This year has 365 days\n");
    }
}
