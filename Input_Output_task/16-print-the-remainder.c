/*16. Write a C program to find the remainder of any two numbers.
    Expected Output:
    Input the two numbers: 21  6
    Remainder of 21 and 6 is: 3*/

#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("Input the two numbers:");
    scanf("%d%d", &x, &y);
    sum = x % y;
    printf("Remainder of %d and %d is:%d/n", x, y, sum);
    return 0;
}