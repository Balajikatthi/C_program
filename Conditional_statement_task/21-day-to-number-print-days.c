/*21. Write a C program to read any day number in integer and display the day name in word format.
    Test Data :
    4
    Expected Output :k
    Thursday*/

#include <stdio.h>
int main()
{
    int day;
    printf("Input Data :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;

    default:
        printf("Not a day") break;
    }
    return 0;
}