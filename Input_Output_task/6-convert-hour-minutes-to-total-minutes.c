/*6. Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
    Expected Output :
    Input hours: 5
    Input minutes: 37
    Total: 337 minute[s.*/

#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("Input hours:");
    scanf("%d", &x);
    sum = x * 60;
    printf("Input minutes:");
    scanf("%d", &y);
    sum = sum + y;
    printf("Total %d minutes \n", sum);
    return 0;
}