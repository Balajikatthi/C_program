/*16. Write a C program to display the sum of n terms of even natural numbers. (to use while loop)
    Test Data :
    Input number of terms : 5
    Expected Output :
    The even numbers are :2 4 6 8 10
    The Sum of even Natural Number upto 5 terms : 30
    */

#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    printf("Input number of terms:");
    scanf("%d", &j);
    i = 0;
    printf("The even numbers are: ");

    while (i < j * 2)
    {
        i = i + 2;
        sum = sum + i;
        printf("%d ", i);
    }
    printf("\nThe Sum of even Natural Number upto %d terms :%d", j, sum);
    return 0;
}