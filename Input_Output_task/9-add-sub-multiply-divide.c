/*9. Write a C program to perform addition, subtraction, multiplication and division of two numbers.
    Expected Output :
    Input any two numbers separated by comma : 10,5
    The sum of the given numbers : 15
    The difference of the given numbers : 5
    The product of the given numbers : 50
    The quotient of the given numbers : 2.000000
*/

#include <stdio.h>
int main()
{
    int x, y, add, sub, mul;
    float div;
    printf("Input any two numbers separated by comma :");
    scanf("%d%d", &x, &y);
    add = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    printf("The sum of the given numbers :%d\n", add);
    printf("The difference of the given numbers :%d\n", sub);
    printf("The product of the given numbers :%d\n", mul);
    printf("The quotient of the given numbers :%f\n", div);

    return 0;
}