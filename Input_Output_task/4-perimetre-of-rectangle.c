/*4.  Write a C program that prints the perimeter of a rectangle using its height and width as inputs.
    Expected Output :
    Input the height of the Rectangle : 5
    Input the width of the Rectangle : 7
    Perimeter of the Rectangle is : 24.000000*/

#include <stdio.h>
int main()
{
    float l, w, r;
    printf("Input the height of the Rectangle :");
    scanf("%f", &l);
    printf("Input the width of the Rectangle :");
    scanf("%f", &w);
    r = 2 * (l + w);
    printf("Perimeter of the Rectangle is : %f\n", r);
    return 0;
}





Output:

Input the height of the Rectangle :5
Input the width of the Rectangle :7
Perimeter of the Rectangle is : 24.000000
