/*2. Write a C program to check whether a given number is even or odd.
    Test Data : 15
    Expected Output :
    15 is an odd integer*/

#include <stdio.h>
int main()
{
    int T1;
    printf("Test data: ");
    scanf("%d", &T1);
    if (T1 % 2 == 0)
    {
        printf("%d is a even number \n", T1);
    }
    else
    {
        printf("%d is a odd number \n", T1);
    }
    return 0;
}

// Output :

//     Test data : 66 66 is a even number