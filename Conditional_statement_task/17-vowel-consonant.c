/*17. Write a C program to check whether an alphabet is a vowel or a consonant.
    Test Data :
    k
    Expected Output :
    The alphabet is a consonant.*/

#include <stdio.h>
int main()
{
    char myAlpha;
    printf("Test Data :");
    scanf("%c", &myAlpha);
    if ((myAlpha == 'a') || (myAlpha == 'e') || (myAlpha == 'i') || (myAlpha == 'o') || (myAlpha == 'u'))
    {
        printf("The alphabet is a Vowel\n");
    }
    else if ((myAlpha == 'A') || (myAlpha == 'E') || (myAlpha == 'I') || (myAlpha == 'O') || (myAlpha == 'U'))
    {
        printf("The alphabet is a Vowel\n");
    }
    else
    {
        printf("The alphabet is a Consonant\n");
    }
}
