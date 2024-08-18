/*12. Write a C program to get and print any two characters.
    Expected Output:
    Input the two characters: g  z
    Entered two characters are: g, z*/

#include <stdio.h>
void main()
{
    char x, y;
    printf("Input the two characters:");
    scanf("%c%c", &x, &y);
    printf("Entered two characters are:%c,%c\n", x, y);
}