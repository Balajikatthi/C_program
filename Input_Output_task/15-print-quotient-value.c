/*15. 16. Write a C program to find the Quotient of any two real numbers.
    Expected Output:
    Input the two numbers: 34  3
    Quotient of 34 and 3 is: 11.333333*/

#include <stdio.h>
int main()
{
    float x, y, sum;
    printf("Input the two numbers:");
    scanf("%f%f", &x, &y);
    sum = x / y;
    printf("Quotient of %f and %f is:%f", x, y, sum);
    return 0;
}