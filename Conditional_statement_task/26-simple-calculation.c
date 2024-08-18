/*26. Write a program in C which is a Menu-Driven Program to perform a simple calculation.
    Test Data :
    10
    2
    3
    Expected Output :
    The Multiplication of 10 and 2 is: 20 */

#include <stdio.h>
void main()
{
    int Add, sub, multiply, divide, x, y, option;
    printf("input the integer :");
    scanf("%d%d", &x, &y);
    printf("1.Add \n2.Sub\n3.Multiply\n4.Divide\n");
    scanf("%d", &option);
    if (option == 1)
    {
        Add = x + y;
        printf("The Add of %d and %d is : %d\n", x, y, Add);
    }
    else if (option == 2)
    {
        sub = x - y;
        printf("The Sub of %d and %d is : %d\n", x, y, sub);
    }
    else if (option == 3)
    {
        multiply = x * y;
        printf("The Multiply of %d and %d is :%d \n", x, y, multiply);
    }
    else if (option == 4)
    {
        divide = x / y;
        printf("The Divide of %d and %d is : %d\n", x, y, divide);
    }
    else
    {
        printf("error\n");
    }
}
