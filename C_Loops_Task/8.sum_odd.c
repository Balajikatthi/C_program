/*8. Write a C program to display the n terms of odd natural numbers and their sum. (to use while loop)
    Test Data
    Input number of terms : 10
    Expected Output :
    The odd numbers are :1 3 5 7 9 11 13 15 17 19
    The Sum of odd Natural Number upto 10 terms : 100
*/

#include <stdio.h>
int main()
{
    int i, j, k;
    int sum = 0;
    printf("Input number of terms :");
    scanf("%d", &j);
    k = j * 2;
    for (i = 1; i <= k; i = i + 2)
    {
        sum = sum + i;
        printf("The odd numbers are :%d\n",i);
    }
    printf("The Sum of odd Natural Number upto %d terms: %d\n", j, sum);
    return 0;
}