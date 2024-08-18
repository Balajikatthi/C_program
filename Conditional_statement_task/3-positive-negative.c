/*3. Write a C program to check whether a given number is positive or negative.
    Test Data : 15
    Expected Output :
    15 is a positive number*/

#include <stdio.h>
int main()
{
    int myNum;
    printf("Test Data :");
    scanf("%d", &myNum);
    if (myNum > 0)
    {
        printf("%d is a Positive number\n", myNum);
    }
    else
    {
        printf("%d is a Negative number\n", myNum);
    }
    return 0;
}