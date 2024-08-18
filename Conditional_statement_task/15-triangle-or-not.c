/*15. Write a C program to check whether a triangle can be formed with the given values for the angles.
    Test Data :
    40 55 65
    Expected Output :
    The triangle is not valid.*/

#include <stdio.h>
int main()
{
    int x, y, z, triangle;
    printf("Test Data :");
    scanf("%%d,%d", &x, &y, &z);
    triangle = x + y + z;
    if (triangle == 180)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }
    return 0;
}