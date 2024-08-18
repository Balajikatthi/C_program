/*17. Write a C program to swap two integers.
    Expected Output:
    Input the a and b values: 45  31

    Before Swapping
    value of a is: 45
    value of b is: 31

    After Swapping
    value of a is: 31
    value of b is: 45*/

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Input the a and b values:");
    scanf("%d%d", &x, &y);
    printf("Before Swapping\n");
    printf("value of x is: %d\n", x);
    printf("value of y is: %d\n\n", y);
    z = x;
    x = y;
    y = z;
    printf("After Swapping\n");
    printf("value of x is :%d\n", x);
    printf("value of y is :%d\n", y);
    return 0;
}