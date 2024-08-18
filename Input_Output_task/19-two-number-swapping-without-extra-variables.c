/*19. Write a C program to swap two integers without using any extra variables, only use two variables.
    Expected Output:
    Input the m and n value: 76  43
    Before Swapping: m = 76, n = 43
    After Swapping: n = 76, m = 43*/

#include <stdio.h>
int main()
{
    int x, y;
    printf("Input the x and y value:");
    scanf("%d%d", &x, &y);
    printf("Before Swapping: x = %d, y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;

    // x=x*y;
    // y=x/y;
    // x=x/y;
    printf("After Swapping: n = %d, m = %d\n", x, y);
    return 0;
}