/*4. Write a C program to find whether a given year is a leap year or not.
    Test Data : 2016
    Expected Output :
    2016 is a leap year.*/

#include <stdio.h>
int main()
{
    int l;
    printf("Test data: ");
    scanf("%d", &l);
    if ((l % 4 == 0) && (l % 100 != 0) || (l % 100 == 0) && (l % 400 != 0))
    {
        printf("%d is a leap year\n", l);
    }
    else
    {
        printf("%d is not a leap year\n", l);
    }
    return 0;
}