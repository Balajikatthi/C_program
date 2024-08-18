/*27. Write a C program to check whether a character is uppercase or lowercase alphabet.
    Test Data:
    Input any one character: R
    The entered character 'R' is uppercase.

    Test Data:
    Input any one character: f
    The entered character 'f' is lowercase.*/

#include <stdio.h>
void main()
{
    char x;
    printf("Test Data :");
    scanf("%c", &x);
    if (('A' <= x) && (x <= 'Z'))
    {
        printf("The entered character '%c' is Uppercase\n", x);
    }
    else if (('a' <= x) && (x <= 'z'))
    {
        printf("The entered character '%c' is Lowercase\n", x);
    }
    else
    {
        printf("Error\n");
    }
}