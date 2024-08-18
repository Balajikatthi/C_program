/*10. Write a C program to find the third angle of a triangle if two angles are given.
    Expected Output :
    Input two angles of triangle separated by comma : 50,70
    Third angle of the triangle : 60*/

#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("Input two angles of triangle separated by comma :");
    scanf("%d%d", &x, &y);
    sum = 180 - (x + y);
    printf("Third angle of the triangle : %d\n", sum);
    return 0;
}