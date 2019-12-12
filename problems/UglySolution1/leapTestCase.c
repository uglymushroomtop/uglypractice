//write a function to return if a year is leap year or not
//boolean isLeapYear(int year);
#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year)
{
    if ((year % 400 == 0))
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
    int leapYear[] = {1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964};
    int notLeap[] = {1905, 1906, 1907, 1909, 1910, 1911, 1913, 1914, 1915, 1917, 1918, 1919, 1921, 1922, 1923, 1925};
    int i;
    int j;
    for (i = 0; i < 16; i++)
    {
        isLeapYear(leapYear[i]);
        printf("Year: %d", leapYear[i]);
        if (isLeapYear(leapYear[i]))
            printf(" Days: 366 CORRRRRECT\n");
        else
            printf(" Days: 365 WROOOONG\n");
    }
    for (j = 0; j < 16; j++)
    {
        isLeapYear(notLeap[j]);
        printf("Year: %d", notLeap[j]);
        if (isLeapYear(notLeap[j]))
            printf(" Days: 366 WROOOOOONG\n");
        else
            printf(" Days: 365 CORRRRRECT\n");
    }
}
