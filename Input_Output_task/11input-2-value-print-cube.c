/*11. Write a C program to get two integers and print their cube.
    Expected Output:
    Input two integer values: 4  2
    cube of 4 is: 64
    cube of 2 is: 8*/

#include <stdio.h>
int main()
{
    int x, y, sum, sum1;
    printf("Input two integer values: ");
    scanf("%d%d", &x, &y);
    sum = x * x * x;
    sum1 = y * y * y;
    printf("cube of %d is: %d\ncube of %d is: %d\n", x, sum, y, sum1);
    return 0;
}