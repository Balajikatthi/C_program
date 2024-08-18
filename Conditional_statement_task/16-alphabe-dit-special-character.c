/*16. Write a C program to check whether a character is an alphabet, digit or special character.
    Test Data :
    @
    Expected Output :
    This is a special character.*/

#include <stdio.h>
int main()
{
    char c;
    printf("Test Data :");
    scanf("%c", &c);
    if (('a' <= c) && (c >= 'z'))
    {
        printf("This is a alphabet character\n");
    }
    else if (('A' <= c) && (c >= 'Z'))
    {
        printf("This is a alphabet character\n");
    }
    else if ((48 <= c) && (c >= 57))
    {
        printf("This is a digit character\n");
    }
    else
    {
        printf("This is a special character\n");
    }
    return 0;
}