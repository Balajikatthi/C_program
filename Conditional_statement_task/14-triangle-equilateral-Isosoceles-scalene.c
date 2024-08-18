/*14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
    Test Data :
    50 50 60
    Expected Output :
    This is an isosceles triangle.*/

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Test Data :");
    scanf("%d%d%d", &x, &y, &z);
    if ((x == y) && (y == z) && (z == x))
    {
        printf("This is an Equilateral triangle.\n");
    }
    else if ((y == z) || (y == x) || (z == x))
    {
        printf("This is an Isoscles triangle.\n");
    }
    else
    {
        printf("This is an Scalene triangle.\n");
    }
    return 0;
}