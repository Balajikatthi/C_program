
/*
11. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.(to use for loop and while loop)

    The pattern like :

     1
     22
     333
     4444
*/

#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter the input");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}