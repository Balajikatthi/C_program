/*30.  Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
    Test Data :
    Input no. of days: 2535
    Expected Output:
    6 Year(s)
    11 Month(s)
    15 Day(s)
*/

#include <stdio.h>
void main()
{
    int day, y, m, x, z;
    printf("Test Data :");
    scanf("%d", &day);
    y = day / 365;
    z = day % 365;
    m = z / 30;
    x = z % 30;
    printf("%d Year(s) \n", y);
    printf("%d Month(s)\n", m);
    printf("%d Day(s)\n", x);
}