/*7. Write a program in C that takes minutes as input, and display the total number of hours and minutes.
    Expected Output :
    Input minutes: 546
    9 Hours, 6 Minutes*/

#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("Input minutes:");
    scanf("%d", &x);
    sum = x / 60;
    y = x % 60;
    printf("%d hours,%d minutes \n", sum, y);
    return 0;
}
