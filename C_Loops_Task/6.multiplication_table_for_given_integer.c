/*6. Write a C program to display the multiplication table for a given integer. (to use for loop)
    Test Data :
    Input the number (Table to be calculated) : 15
    Expected Output :
    15 X 1 = 15
    ...
    ...
    15 X 10 = 150*/

#include <stdio.h> 
int main()
{
    int i, j, sum = 0;
    printf("input the number: ");
    scanf("%d", &j);
    for (i = 1; i <= 10; i++)
    {
        sum = i * j;
        printf("%d x %d =%d\n", j, i, sum);
    }
    return 0;
}