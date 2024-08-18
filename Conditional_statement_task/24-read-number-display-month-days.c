/*24. Write a program in C to read any Month Number in integer and display the number of days for this month. Go to the editor
    Test Data :
    7
    Expected Output :
    Month have 31 days*/

#include <stdio.h>
void main()
{
    int month;
    printf("Input Data :");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("Month have 31 days\n");
        break;
    case 2:
        printf("Month have 28 or 29 days\n");
        break;
    case 3:
        printf("Month have 31 days\n");
        break;
    case 4:
        printf("Month have 30 days\n");
        break;
    case 5:
        printf("Month have 31 days\n");
        break;
    case 6:
        printf("Month have 30 days\n");
        break;
    case 7:
        printf("Month have 31 days\n");
        break;
    case 8:
        printf("Month have 31 days\n");
        break;
    case 9:
        printf("Month have 30 days\n");
        break;
    case 10:
        printf("Month have 31 days\n");
        break;
    case 11:
        printf("Month have 30 days\n");
        break;
    case 12:
        printf("Month have 31 days\n");
        break;

    default:
        printf("This month not have days\n");
        break;
    }
}