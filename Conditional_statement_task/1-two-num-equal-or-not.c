/*1. Write a C program to accept two integers and check whether they are equal or not.
    Test Data : 15 15
    Expected Output :
    Number1 and Number2 are equal*/

#include <stdio.h>
int main()
{
    int Num1, Num2;
    printf("Test Data: ");
    scanf("%d%d", &Num1, &Num2);
    if (Num1 == Num2)
    {
        printf("Number1 and Number2 are Equal\n");
    }
    else
    {
        printf("Number1 and Number2 are not Equal\n");
    }
    return 0;
}

