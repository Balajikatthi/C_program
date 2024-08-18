/*28. Write a C program to convert specified days into years, weeks and days.
    Note: Ignore leap year.

    Test Data :
    Number of days : 1329
    Expected Output :
    Years: 327
    Weeks: 33
    Days: 3
*/

#include <stdio.h>
void main()
{
    int day, y, w, x, z;
    printf("Test Data :");
    scanf("%d", &day);
    y = day / 365;
    z = day % 365;
    w = z / 7;
    x = z % 7;
    printf("years : %d\n", y);
    printf("Weeks : %d\n", w);
    printf("Days : %d\n", x);
}