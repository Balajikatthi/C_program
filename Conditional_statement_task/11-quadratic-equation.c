/*11. Write a C program to calculate the root of a quadratic equation.
    Test Data : 1 5 7
    Expected Output :
    Root are imaginary;
    No solution.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, root, root1, root2;
    printf("Test data:");
    scanf("%f%f%f", &a, &b, &c);
    root = (b * b) - (4 * a * c);
    root1 = (-b + sqrt(root)) / 2 * a;
    root2 = (-b - sqrt(root)) / 2 * a;
    if (root < 0)
    {
        printf("Root are Imaginary\n");
        printf("No solution\n");
    }
    else
    {
        printf("Roots are %f,%f\n", root1, root2);
    }
    return 0;
}