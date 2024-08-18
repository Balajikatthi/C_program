/*18. Write a C program to swap three integers.
    Expected Output:
    Input the x,y and z values: 28  13  89

    Before Swapping
    value of x is: 28
    value of y is: 13
    value of z is: 89

    After Swapping
    value of x is: 13
    value of y is: 89
    value of z is: 28
*/

#include <stdio.h>
int main()
{
    int x, y, z, w;
    printf("Input the x,y and z values:");
    scanf("%d%d%d", &x, &y, &z);
    printf("Before swapping\n");
    printf("value of x is: %d\n", x);
    printf("value of y is: %d\n", y);
    printf("value of y is: %d\n\n", z);
    w = x;
    x = y;
    y = z;
    z = w;

    printf("After swapping\n");
    printf("value of x is :%d\n", x);
    printf("value of y is :%d\n", y);
    printf("value of y is: %d\n", z);
    return 0;
}