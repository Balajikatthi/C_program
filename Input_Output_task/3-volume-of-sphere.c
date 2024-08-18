/*3. Write a C program that calculates the volume of a sphere.
    Expected Output :
    Input the radius of the sphere : 2.56
    The volume of sphere is 70.276237.*/

#include <stdio.h>
int main()
{
    float r, v;
    printf("Input the radius of the sphere : ");
    scanf("%f", &r);
    v = 4.0 / 3.0 * 3.14 * r * r * r;
    printf("The Volume of sphere is %f\n", v);
    return 0;
}