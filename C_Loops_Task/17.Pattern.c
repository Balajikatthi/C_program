/*17. Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row. (to use for loop and while loop)

       1
      2 2
     3 3 3
    4 4 4 4*/

#include <stdio.h>
int main()
{
    int i, j, k, l;
    printf("Enter te number:");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (l = k; l >= i; l--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
