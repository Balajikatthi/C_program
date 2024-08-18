/*25. Write a C program which computes the area of various geometrical shapes using a menu-driven approach.
    Test Data :
    1
    5
    Expected Output :
    The area is : 78.500000*/

#include <stdio.h>
void main()
{
    int rectangle, circle, triangle, length, width, radius, base, height, option;
    printf("1.Rectangle \n2.Circle\n3.Triangle\n");
    scanf("%d", &option);
    if (option == 1)
    {
        printf("enter the length and width:");
        scanf("%d%d", &length, &width);
        rectangle = length * width;
        printf("The rectangle area is :%d\n", rectangle);
    }
    else if (option == 2)
    {
        printf("enter the radius: ");
        scanf("%d", &radius);
        circle = 2 * 3.14 * radius;
        printf("The Circle area is :%d\n", circle);
    }
    else if (option == 3)
    {
        printf("enter the base and height: ");
        scanf("%d%d", &base, &height);
        triangle = 0.5 * (base * height);
        printf("The Triangle area is :%d\n", triangle);
    }
    else
    {
        printf("error");
    }
}
