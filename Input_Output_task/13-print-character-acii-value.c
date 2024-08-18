/*13. Write a C program to get four characters and print their ASCII value.
    Expected Output:
    Input the four characters: 4  a  ! H
    ASCII value of '4' is: 52
    ASCII value of 'a' is: 97
    ASCII value of '!' is: 33
    ASCII value of 'H' is: 72*/

#include <stdio.h>
int main()
{

    char x, y, z, w;
    printf("Input the four characters:");
    scanf("%c%c%c%c", &x, &y, &z, &w);
    printf("ASCII value of %c is: %d\n", x, x);
    printf("ASCII value of %c is: %d\n", y, y);
    printf("ASCII value of %c is: %d\n", z, z);
    printf("ASCII value of %c is: %d\n", w, w);
    return 0;
}
