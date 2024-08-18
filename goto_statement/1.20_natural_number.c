/*1. Write a C program to print first 20 natural numbers and their sum using goto statement.

	Expected output:

	Natural numbers are: 1 2 3 4 5 6 7 8 9 10  11 12 13 14 15 16 17 18 19 20
        Sum is: 210*/

#include <stdio.h>
int main()
{
    int i = 0, sum = 0;
    printf("Natural number are :");
print:
    sum = sum + i;
    i++;
    if (i <= 20)
    {
        printf("%d  ", i);
        goto print;
    }
    printf("\nsum is %d\n", sum);
    return 0;
}