/*
12. Write a program in C to make such a pattern like a right angle triangle with the number increased by 1. (to use for loop and while loop)

    The pattern like :

       1
       2 3
       4 5 6
       7 8 9 10
       */

#include <stdio.h>
int main()
{
    int i, j, n, k = 1;
    printf("Enter the input :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", k++);
        }
        printf("\n");
    }
    return 0;
}